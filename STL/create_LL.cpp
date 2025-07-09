#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
       data=data1;
       next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2Vector(vector<int>&v){
    Node* head=new Node(v[0]);
    Node* mover=head;
    for(int i=1;i<v.size();i++){
        Node* temp=new Node(v[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    vector<int>v={12,34,44,67};
    Node* head=convertArr2Vector(v);
     cout<<head->data;
     cout<<endl;
   
  

}