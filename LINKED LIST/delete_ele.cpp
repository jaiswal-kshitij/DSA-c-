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
Node* convertArrToLL(vector<int>v){
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
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
Node* delete_ele(Node* head,int ele){
    if(head==nullptr){
        return head;
    }
    if(head->data==ele){
      Node* temp=head;
      head=head->next;
      delete temp;
      return head;
    }
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        if(temp->data==ele){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
         prev=temp;
        temp=temp->next;
    }
    return head;
}

int main() {
    vector<int>a={11,82,63,31,5,6,7,8,9};
    Node* head=convertArrToLL(a);
    displayLL(head);
    head=delete_ele(head,31);
    displayLL(head);
    
    return 0;
}