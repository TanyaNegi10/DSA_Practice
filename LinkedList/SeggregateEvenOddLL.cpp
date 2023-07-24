//Seggregate even and odd number in a LL

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

void seggregate(Node* &head)
{
    Node* DummyEven=new Node(-1);
    Node* DummyOdd=new Node(-1);
    Node* evenTail=DummyEven;
    Node* oddTail=DummyOdd;
    Node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data%2==0)
        {
            evenTail->next=curr;
            evenTail=evenTail->next;
        }else{
            oddTail->next=curr;
            oddTail=oddTail->next;
        }
        curr=curr->next;
    }
    evenTail->next=DummyOdd->next;
    oddTail->next=NULL;
    print(DummyEven->next);

}

int main()
{
    Node* head=NULL;
    InsertNode(head,1);
    InsertNode(head,2);
    InsertNode(head,3);
    InsertNode(head,8);
    InsertNode(head,4);
    InsertNode(head,5);
    InsertNode(head,6);

    seggregate(head);
    return 0;
}

// TC=O(N) , SC=O(N)