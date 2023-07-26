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
        prev=NULL;
    }

};
void InsertNode(Node* &head,int data)
{
    Node* newnode=new Node(data);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* temp=head;
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
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

void reverse(Node* head)
{
    Node* temp=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    temp=temp->prev;
    head=temp;
    print(head);
}
int main()
{
    Node* head=NULL;
    InsertNode(head,1);
    InsertNode(head,2);
    InsertNode(head,3);
    InsertNode(head,4);
    InsertNode(head,5);
    print(head);
    reverse(head);

    return 0;
}