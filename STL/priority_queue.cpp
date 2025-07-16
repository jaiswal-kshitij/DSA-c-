#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue<int>pq;// max heap
    priority_queue<int,vector<int>,greater<int>>pq_min; // min heap
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the element:";
        cin>>x;
        pq.push(x);
        pq_min.push(x);
    }

    // display priority queue elemnts
    cout<<"The elements in the priority queue are:"<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    // display min priority queue elements
    cout<<"The elements in the min priority queue are:"<<endl;
    while(!pq_min.empty()){
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }

}