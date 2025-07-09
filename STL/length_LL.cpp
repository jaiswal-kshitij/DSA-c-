#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node* convertArrToLL(vector<int> &v)
{
    Node *head = new Node(v[0]);
    Node *mover = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int length_LL(Node* head){
    int count=0;
    Node* temp=head;
    while(temp){
     cout<<temp->data<<"->";
     temp=temp->next;
     count++;
    }
    return count;
}

int main()
{ 
    vector<int>a={1,2,3,4,5,6};
    Node* head=convertArrToLL(a);
    cout<<endl;
    int length=length_LL(head);
    cout<<endl;
    cout<<"length of linked list:";
    cout<<length;

  

    return 0;
}