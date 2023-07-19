#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
int LLlength(Node* &head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
void InsertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void InsertAtPosition(Node* &head,int data,int pos,Node* &tail)
{
    int n=LLlength(head);
    if(pos==1)
    {
        InsertAtHead(head,data);
    }
    else if(pos==n+1){
        InsertAtTail(tail,data);
    }
    else{
        Node* newNode=new Node(data);
        Node* temp=head;
        int cnt=1;
        while(temp!=NULL && cnt<pos-1)
        {
            cnt++;
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
void print(Node* &head)
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
    cout<<count<<endl;  
}

int main()
{
    Node* node1=new Node(5);
    Node* head=node1;

    print(head);

    Node* tail=node1;

    InsertAtHead(head,7);
    print(head);

    InsertAtTail(tail,9);
    print(head);

    InsertAtPosition(head,11,2,tail);
    print(head);

    return 0;
} 