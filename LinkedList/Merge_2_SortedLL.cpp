// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list

// Merge two sorted linked lists
// Brute Force Approach

// #include <bits/stdc++.h>
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

// int LLlength(Node *&head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }
//     return count;
// }

// void InsertNode(Node *&head, int data)
// {
//     Node *newnode = new Node(data);
//     if (head == NULL)
//     {
//         head = newnode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
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

// void merge(Node* &head1,Node* &head2)
// {
//     Node* dummy=new Node(-1);
//     Node* temp=dummy;
//     while(head1!=NULL && head2!=NULL)
//     {
//         if(head1->data<head2->data)
//         {
//             Node* newNode=new Node(head1->data);
//             temp->next=newNode;
//             temp=temp->next;
//             head1=head1->next;
//         }else{
//             Node* newNode=new Node(head2->data);
//             temp->next=newNode;
//             temp=temp->next;
//             head2=head2->next;
//         }
//     }
//     while(head1!=NULL)
//     {
//         Node* newNode=new Node(head1->data);
//         temp->next=newNode;
//         temp=temp->next;
//         head1=head1->next;
//     }
//     while(head2!=NULL)
//     {
//         Node* newNode=new Node(head2->data);
//         temp->next=newNode;
//         temp=temp->next;
//         head2=head2->next;
//     }
//     print(dummy->next);
// }



// int main()
// {
//     Node* head1=NULL;
//     Node* head2=NULL;

//     InsertNode(head1,2);
//     InsertNode(head1,4);
//     InsertNode(head1,6);
    
//     InsertNode(head2,1);
//     InsertNode(head2,3);
//     InsertNode(head2,5);

//     print(head1);
//     print(head2);

//     merge(head1,head2);
    
//     return 0;
// }

//Optimal Approach

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

int LLlength(Node *&head)
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
    while (temp->next != NULL)
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

Node* merge(Node* head1,Node* head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    if(head1->data>head2->data)
    {
        swap(head1,head2);
    }
    Node *res=head1;
    while(head1!=NULL && head2!=NULL)
    {
        Node* temp=NULL;
        while(head1!=NULL && head1->data<=head2->data)
        {
            temp=head1;
            head1=head1->next;
        }
        temp->next=head2;
        swap(head1,head2);
    }
    return res;
}



int main()
{
    Node* head1=NULL;
    Node* head2=NULL;

    InsertNode(head1,2);
    InsertNode(head1,4);
    InsertNode(head1,6);
    
    InsertNode(head2,1);
    InsertNode(head2,4);
    InsertNode(head2,5);

    print(head1);
    print(head2);

    Node *ans=merge(head1,head2);
    print(ans);
   
    return 0;
}