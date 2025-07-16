#include <iostream>
#include<map>
using namespace std;

int main() {
    map<int,string>mp;
    mp.insert({51,"tanya"});
    mp.insert({98,"shubh"});
    mp[100]="sachin";
    mp[101]="sachin"; // This will update the value for key 100
    mp.emplace(103,"nirbhay");
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the key:"<<endl;
        cin>>x;
        string val;
        cout<<"enter the value:"<<endl;
        cin>>val;
        mp[x]=val;
    }
    for(map<int,string>::iterator it=mp.begin(); it!=mp.end();it++){
           cout<<it->first<<":"<<it->second<<endl;
    }

    for(auto p:mp){
        cout<<p.first<<"->"<<p.second<<endl;
    }
   // mp.erase("sachin"); // This will not work as erase requires a key of type int
   mp.erase(101); // Correct usage to erase by key
    cout << "After erasing key 101:" << endl;
    for(auto p:mp){
        cout<<p.first<<"->"<<p.second<<endl;
    }
    
// Removed invalid while loop using !mp.end()
// If you intended to loop through the map, use the for loops above.
if(mp.find(100)!=mp.end()){
    cout<<"Key 100 found with value: " << mp[100] << endl;
}
else{
    cout<<"Key 100 not found." << endl;
}
}