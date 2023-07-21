#include <bits/stdc++.h>
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

void Reverse(Node* &head)
{
    Node* DummyNode=NULL;
    while(head!=NULL)
    {
        Node* next=head->next;                          
        head->next=DummyNode;
        DummyNode=head;
        head=next;
    }
    print(DummyNode);
}
int main()
{
    Node *node1 = new Node(8);
    Node *head = node1;
    print(head);

    InsertNode(head, 4);
    print(head);

    InsertNode(head, 13);
    print(head);

    InsertNode(head, 22);
    print(head);

    InsertNode(head, 5);
    print(head);

    Reverse(head);

    return 0;
}

//TC=O(n)
//SC=O(1)
