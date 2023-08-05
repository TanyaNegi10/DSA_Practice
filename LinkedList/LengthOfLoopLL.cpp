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

int findLengthOfLLLoop(Node* &head)
{
    if(head==NULL && head->next==NULL)
    {
        return -1;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            Node* curr=slow;
            int count=1;
            while(curr->next!=slow)
            {
                curr=curr->next;
                count++;
            }
            return count;
        }
    }
    return -1;
}

int main()
{
    Node* head = NULL;

    // //Ex-1
    // InsertNode(head,1);
    // InsertNode(head,2);
    // InsertNode(head,3);
    // InsertNode(head,4);
    // InsertNode(head,5);
    // InsertNode(head,6);

    // createCycle(head,2,5);

    //Ex-2
    InsertNode(head,1);
    InsertNode(head,2);
    InsertNode(head,3);
    InsertNode(head,4);

    createCycle(head,1,3);


    cout<<findLengthOfLLLoop(head);
    return 0;
}