#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = tail -> next;

}

void insertAtPosition(Node* &head,int position,int d){
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    Node* newNode = new Node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

int CountNode(Node* &head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    return count;
}

int main()
{
    Node* Node1=new Node(5);
    Node* head=Node1;
    CountNode(head);

    insertAtHead(head,10);
    CountNode(head);

    Node* tail=Node1;
    insertAtTail(tail,34);
    CountNode(head);

    insertAtPosition(head,2,22);
    CountNode(head);

    int totalNode=CountNode(head);
    cout<<endl;
    cout<<totalNode;

    return 0;
}