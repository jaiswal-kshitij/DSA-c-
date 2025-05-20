#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    for(int i=0;i<10;i++){
        if(i<5){
            cout<<"push_back: "<<i<<endl;
            l.push_back(i);
        }
        else{
            cout<<"push_front: "<<i<<endl;
            l.push_front(i);
        }
    }
    for(int i:l){
        cout<<i<<" ";
    }
    l.pop_back();
    cout<<endl;
    cout<<"list after pop_back"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_front();
    cout<<"list after pop_front"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
}