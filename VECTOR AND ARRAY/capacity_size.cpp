#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v.push_back(6);
cout<<"size "<<v.size()<<endl;
cout<<"capacity"<<v.capacity()<<endl;
v.push_back(9);
cout<<"size "<<v.size()<<endl;
cout<<"capacity"<<v.capacity()<<endl;
v.push_back(12);
cout<<"size "<<v.size()<<endl;
cout<<"capacity"<<v.capacity()<<endl;
v.push_back(15);
cout<<"size "<<v.size()<<endl;
cout<<"capacity"<<v.capacity()<<endl;
v.push_back(18);
cout<<"size "<<v.size()<<endl;
cout<<"capacity"<<v.capacity()<<endl;
}