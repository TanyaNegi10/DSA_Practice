//Stack Implementation using array

// #include<bits/stdc++.h>
// using namespace std;
// class Stack{
//     int size;
//     int top;
//     int *arr;

//     public:
//     Stack()
//     {
//         top=-1;
//         size=100;
//         arr=new int[size];
//     }

//     void push(int x){
//         top++;
//         arr[top]=x;
//     }

//     int pop()
//     {
//         int x=arr[top];
//         top--;
//         return x;
//     }

//     int topEle(){
//         return arr[top];
//     }

//     int sizeStack()
//     {
//         return top+1;
//     }

//     void printStack()
//     {
//         while(top!=-1)
//         {
//             cout<<arr[top]<<endl;
//             top--;
//         }
//     }

// };
// int main()
// {
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
    
//     cout<<"Top--"<<" "<<s.topEle()<<endl;
//     cout<<"Size ="<<" "<<s.sizeStack()<<endl;
//     cout<<"pop--"<<" "<<s.pop()<<endl;
//     cout<<"Top--"<<" "<<s.topEle()<<endl;
//     cout<<"Stack"<<endl;
//     s.printStack();

//     return 0;
// }

//Stack implementation using linkedlist

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
// };
// class Stack{
//     public:
//     Node* top;

//     void push(int x,Node* &head)
//     {
//         Node* newnode=new Node(x);
//         if(head==NULL)
//         {
//             head=newnode;           
//             top=head;
//             return;
//         }
//         else{
//             top=top->next;
//             newnode->next=top;
//             top=newnode;
//         }
//     }
//     int topEle()
//     {
//         return top->data;
//     }
// };
// int main()
// {
//     Stack s;
//     Node* head=NULL;
//     s.push(1,head);
//     cout<<s.topEle()<<endl;
//     s.push(2,head);
//     cout<<s.topEle()<<endl;
//     s.push(3,head);
//     cout<<s.topEle()<<endl;     
       
//     return 0;
// }


//Inbuilt implementation of stack
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(4);
    s.push(8);
    cout<<s.top()<<endl;
    s.push(12);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<"size"<<" "<<s.size()<<endl;
    return 0;

}
