#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    for(int i=0;i<11;i++){
        if(i<6){
            cout<<"Pushing back "<<i<<endl;
            d.push_back(i);
        }
        else{
            cout<<"Pushing front "<<i<<endl;
            d.push_front(i);
        }
    }
    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"popping back "<<endl;
    d.pop_back();
    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"popping front "<<endl;
    d.pop_front();
    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"emplacing back "<<endl;
    d.emplace_back(100);
    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"emplacing front "<<endl;
    d.emplace_front(200);
    for(int val:d){
        cout<<val<<" ";
    }
}