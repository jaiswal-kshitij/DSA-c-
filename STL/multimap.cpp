#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;
    mp.insert({1, "apple"});
    mp.insert({1, "apple"});
    mp.insert({1, "apple"});
    mp.insert({1, "apple"});
    mp.insert({1, "apple"});
    mp.insert({1, "apple"});

    mp.erase(1); // This will remove all elements with key 1


    for(auto p: mp){
        cout<<p.first<<":"<<p.second<<endl;
    }
    cout << "Size of multimap after erasure: " << mp.size() << endl;


    if(mp.empty()) {
        cout << "Multimap is empty." << endl;
    } else {
        cout << "Multimap is not empty." << endl;
    }

    // Attempting to erase a key that does not exist
    mp.erase(2); // This will not change the multimap since key 2 does
    // not exist
    cout << "Attempted to erase key 2, no change in multimap." << endl;
    cout << "Final size of multimap: " << mp.size() << endl;
    
    // Displaying the final state of the multimap
    for(auto p: mp){
        cout<<p.first<<":"<<p.second<<endl;
    }

    cout << "Final size of multimap after all operations: " << mp.size() << endl;
    if(mp.empty()) {
        cout << "Multimap is empty after all operations." << endl;
    } else {
        cout << "Multimap is not empty after all operations." << endl;
    }
    // Return 0 to indicate successful execution
    cout << "Program completed successfully." << endl;
    cout << "Exiting program." << endl;
    return 0;


}