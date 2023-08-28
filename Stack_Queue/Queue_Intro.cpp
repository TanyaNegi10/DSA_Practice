//Queue implementation using array

// #include<bits/stdc++.h>
// using namespace std;
// class Queue{
//     int* arr;
//     int start,end,curr;
//     public:
//     Queue()
//     {
//         arr=new int[5];
//         start=-1;
//         end=-1;
//         curr=0;
//     }
//     void push(int x,int n)
//     {
//         if(curr==n)
//         {
//             cout<<"Queue is full";
//             exit(1);
//         }
//         if(end==-1)
//         {
//             start=0;
//             end=0;
//         }else{
//             end=(end+1)%n;
//         }
//         arr[end]=x;
//         curr++;
//     }
//     int pop(int n)
//     {
//         if(start==-1)
//         {
//             cout<<"Queue is empty"<<endl;
//         }
//         int x=arr[start];
//         if(curr==1)
//         {
//             start=-1;
//             end=-1;
//         }else{
//             start=(start+1)%n;
//         }
//         curr--;
//         return x;
//     }
//     int top()
//     {
//         if(start==-1)
//         {
//             cout<<"Empty!"<<endl;
//             exit(1);
//         }
//         return arr[start];
//     }
//     int size()
//     {
//         return curr;
//     }
// };
// int main()
// {
//     Queue q;
//     int arrsize=5;
//     q.push(1,arrsize);
//     q.push(2,arrsize);
//     q.push(4,arrsize);
//     q.push(6,arrsize);
//     cout<<q.top()<<endl;
//     cout<<q.size()<<endl;
//     cout<<q.pop(arrsize)<<endl;
//     cout<<q.size()<<endl;

//     return 0;
// }

//Inbuilt implementation of queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(8);
    cout<<"Size "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"Size "<<q.size()<<endl;
    return 0;
}