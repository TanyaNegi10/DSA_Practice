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

void InsertNode(Node *&head, int data)
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

void RemoveMiddle(Node* &head)
{
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;
    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
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
    cout<<"After removing middle"<<endl;
    RemoveMiddle(head);
    return 0;
}

// TC=O(N) , SC=O(1)