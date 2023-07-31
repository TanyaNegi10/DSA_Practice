//Reverse k nodes of a LL 
// Input: 1 2 3 4 5 6 7 8       ,   k=3
// Output: 3 2 1 6 5 4 7 8 

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertNode(Node* &head,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = newNode;
    return;
}
void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int findLength(Node* head)
{
    int length = 1;
    while(head -> next != NULL)
    {
        length++;
        head = head -> next;
    }

    return length;
}

Node* reverseKNodes(Node* head,int k)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* dummy=new Node(-1);
    int length=findLength(head);
    dummy->next=head;
    Node* prev=dummy;
    Node* curr;
    Node* nex;
    while(length>=k)
    {
        curr=prev->next;
        nex=curr->next;
        for(int i=1;i<k;i++)
        {
            curr->next=nex->next;
            nex->next=prev->next;
            prev->next=nex;
            nex=curr->next;
        }
        prev=curr;
        length-=k;
    }
    return dummy->next;
}
int main()
{
    Node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    insertNode(head,7);
    insertNode(head,8);

    print(head);

    Node* ans = reverseKNodes(head,3);              
    print(ans);
    return 0;
}