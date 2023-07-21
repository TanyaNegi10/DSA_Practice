// // Find the middle node and print the LL from that node

// // Brute Force Approach
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

// void InsertAtHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }
// void InsertAtTail(Node *&tail, int d)
// {
//     Node *temp = new Node(d);
//     tail->next = temp;
//     tail = temp;
// }
// void InsertAtPosition(Node *&head, int data, int pos, Node *&tail)
// {
//     int n = LLlength(head);
//     if (pos == 1)
//     {
//         InsertAtHead(head, data);
//     }
//     else if (pos == n + 1)
//     {
//         InsertAtTail(tail, data);
//     }
//     else
//     {
//         Node *newNode = new Node(data);
//         Node *temp = head;
//         int cnt = 1;
//         while (temp != NULL && cnt < pos - 1)
//         {
//             cnt++;
//             temp = temp->next;
//         }
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//         count++;
//     }
//     cout << endl;
//     cout << count << endl;
// }

// Node *findMiddle(Node *&head, int mid)
// {
//     Node *temp = head;
//     int cnt = 1;
//     while (temp != NULL && cnt != mid)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     return temp;
// }

// void printNewNode(Node *newhead)
// {
//     while (newhead != NULL)
//     {
//         cout << newhead->data << " ";
//         newhead = newhead->next;
//     }
// }

// int main()
// {
//     Node *node1 = new Node(5);
//     Node *head = node1;

//     print(head);

//     Node *tail = node1;

//     InsertAtHead(head, 7);
//     print(head);

//     InsertAtTail(tail, 9);
//     print(head);

//     InsertAtPosition(head, 11, 2, tail);
//     print(head);

//     InsertAtTail(tail, 13);
//     print(head);

//     InsertAtTail(tail, 2);
//     print(head);

//     int n = LLlength(head);
//     int middle = (n / 2) + 1;

//     Node *ans = findMiddle(head, middle);
//     printNewNode(ans);

//     return 0;
// }

//TC=O(n/2)+O(n)
//SC=O(1)

// Optimal Approach

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

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtPosition(Node *&head, int data, int pos, Node *&tail)
{
    int n = LLlength(head);
    if (pos == 1)
    {
        InsertAtHead(head, data);
    }
    else if (pos == n + 1)
    {
        InsertAtTail(tail, data);
    }
    else
    {
        Node *newNode = new Node(data);
        Node *temp = head;
        int cnt = 1;
        while (temp != NULL && cnt < pos - 1)
        {
            cnt++;
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void print(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

//Tortoise and hare method
void middle(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    while (slow != NULL)
    {
        cout << slow->data << " ";
        slow = slow->next;
    }
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;

    Node *tail = node1;

    InsertAtHead(head, 7);

    InsertAtTail(tail, 9);

    InsertAtPosition(head, 11, 2, tail);

    InsertAtTail(tail, 13);

    InsertAtTail(tail, 2);
    print(head);

    middle(head);

    return 0;
}

//TC=O(n)
//SC=O(1)