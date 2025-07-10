#include <iostream>
#include<vector>
using namespace std;
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
Node* convertArrToLL(vector<int>&v){
    Node* head=new Node(v[0]);
    Node* mover=head;
    for(int i=1;i<v.size();i++){
        Node* temp=new Node(v[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void displayLL(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
Node* deleteTail(Node* head){
 if(head == nullptr || head->next==nullptr){
    return head;
 }
 Node* temp=head;
 while(temp->next->next!=nullptr){
    temp=temp->next;
 }
 delete temp->next;
 temp->next=nullptr;
 return head;

}

int main() {
    vector<int>v={1,2,3,4,5,6,7};
    Node* head=convertArrToLL(v);
    cout<<head->data<<endl;
    displayLL(head);
    head=deleteTail(head);
    displayLL(head);

    
    return 0;
}