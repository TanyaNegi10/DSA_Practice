//Rotate LL by k

//Brute force
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
int LLlength(Node* &head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
void insertNode(Node* &head,int data)
{
    Node* newNode=new Node(data);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
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
Node* rotateByK(Node* &head,int k)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* temp=head;
    int n=LLlength(head);
    k=k%n;
    for(int i=0;i<k;i++)
    {
        Node* prev=NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        temp->next=head;
        head=temp;
    }
    return head;    
}
int main()
{
    Node* head=NULL;
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    insertNode(head,7);
    print(head);
    Node* ans=rotateByK(head,3);
    print(ans);
    return 0;
}

//TC=O(N*K)  ,  SC=O(1)

//Optimal Approach
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
// };
// int LLlength(Node* &head)
// {
//     Node* temp=head;
//     int count=0;
//     while(temp!=NULL)
//     {
//         temp=temp->next;
//         count++;
//     }
//     return count;
// }
// void insertNode(Node* &head,int data)
// {
//     Node* newNode=new Node(data);
//     if(head==NULL)
//     {
//         head=newNode;
//         return;
//     }
//     else{
//         Node* temp=head;
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=newNode;
//         return;
//     }
// }
// void print(Node* &head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// Node* rotateByK(Node* &head,int k)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
//     Node* temp=head;
//     int n=LLlength(head);
//     k=k%n;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=head;
//     int c=n-k;
//     Node* prev=NULL;
//     while(c)
//     {
//         prev=head;
//         head=head->next;
//         c--;
//     }
//     prev->next=NULL;
//     return head;      
// }
// int main()
// {
//     Node* head=NULL;
//     insertNode(head,3);
//     insertNode(head,4);
//     insertNode(head,5);
//     insertNode(head,6);
//     insertNode(head,7);
//     print(head);
//     Node* ans=rotateByK(head,8);
//     print(ans);
//     return 0;
// }

//  TC=O(N)+O(N-K)=O(N) ,  SC=O(1)      
