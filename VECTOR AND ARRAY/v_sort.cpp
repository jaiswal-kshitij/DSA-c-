#include<iostream>
#include<vector>
#include "../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"enter the maximum size:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the element: "<<i<<endl;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }


}