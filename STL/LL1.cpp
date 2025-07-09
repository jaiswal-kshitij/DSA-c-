#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*struct Node{
     public:
     int data;
     Node* next;
     public:
     Node(int data1,Node* next1){
         data=data1;
         next=next1;
     }
     public:
     Node(int data1){
         data=data1;
         next=nullptr;
     }
 };*/
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
int main(){
    vector<int>v={1,2,3,4,5};
    Node* y=new Node(0);
    cout<<y->data<<endl;
    cout<<y->next<<endl;
}