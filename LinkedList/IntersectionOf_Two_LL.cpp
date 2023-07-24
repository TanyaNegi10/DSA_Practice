// Find intersection of two LL
//    LL1:   1->2->3->4->5   or       1->2->3->4->5->
//    LL2:   6->7->4->5                  6->7--^
// ans=4

// Brute force

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
//     while (temp->next!= NULL)
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

// Node* FindIntersection(Node* &head1, Node* &head2)
// {
//     unordered_set<Node*>s;
//     while(head1!=NULL)
//     {
//         s.insert(head1);
//         head1=head1->next;
//     }
//     while(head2!=NULL)
//     {
//         if(s.find(head2)!=s.end())
//         {
//             return head2;
//         }
//         else{
//             head2=head2->next;
//         }
//     }
//     return NULL;
// }

// int main()
// {
//     Node* head=NULL;
//     Node* head1=NULL;
//     Node* head2=NULL;
//     InsertNode(head,4);
//     InsertNode(head,1);
//     InsertNode(head,8);
//     InsertNode(head,4);
//     InsertNode(head,5);
//     head1=head;
//     Node* sec=NULL;
//     head=head->next->next;
//     InsertNode(sec,5);
//     head2=sec;
//     InsertNode(sec,6);
//     sec=sec->next;
//     InsertNode(sec,1);
//     sec=sec->next;
//     sec->next=head;
//     print(head1);
//     print(head2);
//     cout<<"Intersection at ";
//     Node* ans=FindIntersection(head1,head2);
//     cout<<ans->data;
//     return 0;
// }

// TC=O(N+M) , SC=O(N)

// Optimal Approaches

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

// Optimal Approach-1

// Node* FindIntersection(Node* head1,Node* head2)
// {
//     int n1=LLlength(head1);
//     int n2=LLlength(head2);
//     int diff;
//     if(n1>n2)
//     {
//         diff=n1-n2;
//         while(diff!=0)
//         {
//             head1=head1->next;
//             diff--;
//         }
//     }else{
//         diff=n2-n1;
//         while(diff!=0)
//         {
//             head2=head2->next;
//             diff--;
//         }
//     }
//     while(head1!=NULL)
//     {
//          if(head1==head2)
//         {
//             return head1;
//         }
//         else{
//             head1=head1->next;
//             head2=head2->next;
//         }
//     }
//     return NULL;
// }

// TC=O(M)+O(N)+O(M-N) , SC=O(1)

// Optimal Approach-2

Node *FindIntersection(Node *&head1, Node *&head2)
{
    Node *dummy1 = head1;
    Node *dummy2 = head2;
    while (dummy1 != dummy2)
    {
        if (dummy1 == NULL)
        {
            dummy1 = head2;
        }
        else{
            dummy1 = dummy1->next;
        }

        if (dummy2 == NULL)
        {
            dummy2 = head1;
        }
        else{
            dummy2 = dummy2->next;
        }
        
    }
    return dummy1;
}
// TC=O(2N) , SC=O(1)

int main()
{
    Node *head = NULL;
    Node *head1 = NULL;
    Node *head2 = NULL;
    InsertNode(head, 3);
    // InsertNode(head, 1);
    // InsertNode(head, 8);
    // InsertNode(head, 4);
    // InsertNode(head, 5);
    head1 = head;
    Node *sec = NULL;
    //head = head->next->next;
    InsertNode(sec, 2);
    head2 = sec;
    // InsertNode(sec, 3);
    // sec = sec->next;
    // InsertNode(sec, 1);
    // sec = sec->next;
    sec->next = head;
    print(head1);
    print(head2);



    Node *ans = FindIntersection(head1, head2);

    cout << ans->data << endl;

    return 0;
}