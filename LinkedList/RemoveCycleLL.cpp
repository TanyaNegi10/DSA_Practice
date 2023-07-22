// Remove the cycle from LL

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

//Insertion in LL
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

//Printing LL
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

//Creating Cycle in LL
void createCycle(Node* &head,int a,int b)
{
    int cnt1=0;
    int cnt2=0;
    Node* p1=head;
    Node* p2=head;
    while(cnt1!=a || cnt2!=b)
    {
        if(cnt1!=a)
        {
            p1=p1->next;
            cnt1++;
        }
        if(cnt2!=b)
        {
            p2=p2->next;
            cnt2++;
        }
    }
    p2->next=p1;
}

//Removing Cycle from LL
void RemoveCycle(Node* &head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            break;
        }
    }
    slow=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}
int main()
{
    Node* head=NULL;
    InsertNode(head,1);
    InsertNode(head,2);
    InsertNode(head,3);
    InsertNode(head,4);

    createCycle(head,1,3);
    //print(head);
   
    RemoveCycle(head);
    cout<<"LL after removing cycle"<<endl;
    print(head);

    return 0;
}