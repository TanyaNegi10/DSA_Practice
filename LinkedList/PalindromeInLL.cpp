//Find whether the LL is palindrome or not

//Brute force
// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void InsertNode(Node* &head,int data)
// {
//     Node* node=new Node(data);
//     if(head==NULL)
//     {
//         head=node;
//         return;
//     }else{
//         Node* temp=head;
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=node;
//         return;
//     }
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// bool isPalindrome(Node* &head)
// {
//     Node* temp=head;
//     vector<int>v;
//     while(temp!=NULL)
//     {
//         v.push_back(temp->data);
//         temp=temp->next;
//     }
//     int n=v.size();
//     int s=0;
//     int e=n-1;
//     while(s<=e)
//     {
//         if(v[s]!=v[e])
//         {
//             return false;
//         }else{
//             s++;
//             e--;
//         }
//     }
//     return true;
// }

// int main()
// {
//     Node* head=NULL;
//     InsertNode(head,1);
//     InsertNode(head,2);
//     InsertNode(head,3);
//     InsertNode(head,2);
//     InsertNode(head,1);
//     if(isPalindrome(head))
//     {
//         cout<<"LL is palindrome"<<endl;
//     }
//     else{
//         cout<<"Not a palindrome";
//     }
//     return 0;
// }

//TC=O(2N),   SC=O(N)

//Optimal Approach
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
void InsertNode(Node* &head,int data)
{
    Node* node=new Node(data);
    if(head==NULL)
    {
        head=node;
        return;
    }else{
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=node;
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

Node* reverse(Node* &p)
{
    Node* next=NULL;
    Node* prev=NULL;
    while(p!=NULL)
    {
        next=p->next;
        p->next=prev;
        prev=p;
        p=next;
    }
    return prev;                
}

bool isPalindrome(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    Node* p=head;
    while (slow!=NULL)
    {
       if(p->data!=slow->data)
       {
        return false;
       }
        slow=slow->next;
        p=p->next;
    }
    return true;
}

int main()
{
    Node* head=NULL;
    InsertNode(head,1);
    InsertNode(head,2);
    InsertNode(head,8);
    InsertNode(head,2);
    InsertNode(head,1);
    if(isPalindrome(head))
    {
        cout<<"LL is palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}

// TC=O(N/2)+O(N/2)+O(N/2)  , SC=O(1)