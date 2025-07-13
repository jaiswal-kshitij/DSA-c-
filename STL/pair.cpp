#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << "  " << p.second << endl;
    // string pair
    pair<string, int> p2 = {"hello", 10};
    cout << p2.first << " " << p2.second << endl;
    // pair of pairs
    pair<pair<int,int>,pair<string,string>>p3={{1,2},{"kshitij","jaiswal"}};
    cout<<p3.first.first<<"  "<<p3.first.second<<endl;
    cout<<p3.second.first<<"  "<<p3.second.second<<endl;
    vector<pair<int,int>>v={{1,2},{3,4},{5,6}};
    v.push_back({7,8});
    v.emplace_back(9, 10);
    for(pair<int,int> x:v){
        cout<<x.first<<" "<<x.second<<endl; 
    }
}