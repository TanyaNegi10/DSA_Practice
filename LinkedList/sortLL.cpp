//Merge sort
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
void InsertNode(Node* &head,int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        return;
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
Node* merge(Node* head1,Node* head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    if(head1->data>head2->data)
    {
        swap(head1,head2);
    }
    Node* res=head1;
    while(head1!=NULL && head2!=NULL)
    {
        Node* temp=NULL;

        while(head1!=NULL && head1->data<=head2->data)
        {
            temp=head1;
            head1=head1->next;
        }
        temp->next=head2;
        swap(head1,head2);
    }
    return res;
    
}
Node* sort(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* temp=NULL;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    temp->next=NULL;
    Node* l1=sort(head);
    Node* l2=sort(slow);

    return merge(l1,l2);
}
int main()
{
    Node* head=NULL;
    InsertNode(head,8);
    InsertNode(head,5);
    InsertNode(head,1);
    InsertNode(head,34);
    InsertNode(head,9);
    print(head);
    Node *ans=sort(head);
    print(ans);
    return 0;
}