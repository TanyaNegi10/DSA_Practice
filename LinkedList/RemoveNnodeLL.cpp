//Remove n node from end in LL

//Brute force
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int LLlength(Node* &head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void InsertNode(Node *&head, int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

//Brute force approach

// void RemoveNodeFromEnd(Node* &head,int n)
// {
//     int l=LLlength(head);
//     int pos=l-n;
//     int cnt=1;
//     Node* temp=head;
//     while(cnt!=pos)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     Node* nex=temp->next;
//     temp->next=nex->next;
// }

// TC=O(N)+O(N-n) , SC=O(1)

//Optimised Approach
void RemoveNodeFromEnd(Node* &head,int n)
{
    Node* node1=new Node(-1);
    node1->next=head;
    Node* slow=node1;
    Node* fast=node1;
    for(int i=0;i<n;i++)
    {
        fast=fast->next;
    }
    Node* prev=NULL;
    while(fast!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=slow->next;
}

// TC=O(N) , SC=O(1)

int main()
{
    Node* head=NULL;
    InsertNode(head,1);
    InsertNode(head,2);
    InsertNode(head,3);
    InsertNode(head,4);
    InsertNode(head,5);
    InsertNode(head,6);
    int n=4;
    print(head);
    cout<<"After removing "<<n<<"th node from end"<<endl;
    RemoveNodeFromEnd(head,4);
    print(head);
    return 0;
}