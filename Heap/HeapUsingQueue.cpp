#include<bits/stdc++.h>
using namespace std;
int main()
{
    //max heap
    priority_queue<int>pq;
    pq.push(54);
    pq.push(53);
    pq.push(55);
    pq.push(52);
    pq.push(50);

    cout<<"Max Heap"<<endl;
    while(!pq.empty())
    {
        int val=pq.top();
        cout<<val<<" ";
        pq.pop();
    }
    //min heap
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(54);
    q.push(53);
    q.push(55);
    q.push(52);
    q.push(50);
    cout<<endl;

    cout<<"Min Heap"<<endl;
    while(!q.empty())
    {
        int val=q.top();
        cout<<val<<" ";
        q.pop();
    }
    return 0;
}