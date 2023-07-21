#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

void InsertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertAtTail(Node* &tail,int data,Node* &head)
{
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    tail->next=head;
    
}

void InsertAtPosition(Node* &head,int data,int pos)
{

   Node* newnode=new Node(data);
   Node *tem2=head;
   int cnt=1;
   while( cnt<pos-1)
   {
        tem2=tem2->next;
        cnt++;
   }
   newnode->next=tem2->next;
   tem2->prev=newnode;
   newnode->prev=tem2;
   tem2->next=newnode;
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(3);
    Node* head=node1;
    print(head);
    InsertAtHead(head,4);
    print(head);
    Node* tail=node1;

    InsertAtTail(tail,5,head);
    print(head);
    //cout<<"tail:"<<tail->data<<endl;

   // print(head);
    return 0;
}