//Detect the cycle in a LL and then remove the cycle

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

//Detecting Cycle in LL
//Brute force approach  ----  TC = O(n), SC = O(n)

// bool DetectCycle(Node* &head)
// {
//     unordered_set<Node*>s;
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         if(s.find(temp)!=s.end())
//         {
//             return true;
//         }
//         else{
//             s.insert(temp);
//             temp=temp->next;
//         }
//     }
//     return false;
// }

//Optimal Approach ----- TC = O(n), SC = O(1)

bool DetectCycle(Node* &head)
{
   Node* slow=head;
   Node* fast=head;
   while(fast->next!=NULL && fast->next->next!=NULL)
   {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
   }
   return false;
}

int main()
{
    Node* head=NULL;
    InsertNode(head,1);
    InsertNode(head,2);
    InsertNode(head,3);
    InsertNode(head,4);
    InsertNode(head,5);
    InsertNode(head,6);
    
    createCycle(head,2,5);
    
    if(DetectCycle(head))
    {
        cout<<"Cycle present"<<endl;
        //print(head);              //This will print the cycle which is a infinite loop
    }else{
        cout<<"No cycle present"<<endl;
    }

    return 0;
}