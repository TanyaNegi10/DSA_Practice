#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
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

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = tail -> next;

}

void insertAtPosition(Node* &head,int position,int d){
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    Node* newNode = new Node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout << endl;
}

void Deletefromhead(Node* &head)
{
    head=head->next;
}

void Deletefromtail(Node* &head,Node* &tail)
{
    Node* temp=head;
    Node* prev=NULL;
    while(temp->next->next!=NULL)
    {
        prev=temp->next;
        temp=temp->next;
    }
    prev->next=NULL;
    tail=prev;
}

void DeletefromPosition(Node* &head,int pos,Node* &tail)
{
    if(pos==1)
    {
        Deletefromhead(head);
    }
    else if(pos==LLlength(head))
    {
        Deletefromtail(head,tail);
    }else{
        Node* prev=head;
        int count=1;
        while(count!=pos-1)
        {
            count++;
            prev=prev->next;
        }
        Node* temp=prev->next;
        prev->next=temp->next;
    }
}

void deleteData(int data,Node* &head)
{
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL && data!=temp->data)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        return ;
    }
    if(prev==NULL)
    {
        head=head->next;
    }
    else{
        prev->next=temp->next;
    }
}

int main()
{
    Node *node1 = new Node(5);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;
    print(head);

    insertAtHead(head,8);
    print(head);

    insertAtHead(head,10);
    print(head);

    insertAtHead(head,20);
    print(head);

    Node* tail = node1;
    insertAtTail(tail,30);
    print(head);

    insertAtTail(tail,60);
    print(head);

    insertAtPosition(head,4,100);
    print(head);

    deleteData(10,head);
    print(head);

    deleteData(60,head);
    print(head);

    Deletefromhead(head);
    print(head);

    Deletefromtail(head,tail);
    print(head);

    insertAtTail(tail,80);
    print(head);

    DeletefromPosition(head,2,tail);
    print(head);

    DeletefromPosition(head,3,tail);
    print(head);

    insertAtTail(tail,87);
    print(head);

    // cout << head -> data << endl;
    return 0;
}
