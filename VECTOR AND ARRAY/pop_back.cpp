#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6); 
cout<<"size: "<<v.size()<<endl;
cout<<"capacity: "<<v.capacity()<<endl;    
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
 cout<<"size: "<<v.size()<<endl;
cout<<"capacity: "<<v.capacity()<<endl;   

}