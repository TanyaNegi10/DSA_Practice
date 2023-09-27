#include <bits/stdc++.h>
using namespace std;
void kClosest(vector<int> &arr,int k,int x)
{
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<arr.size();i++)
    {
        pq.push({abs(arr[i]-k),arr[i]});
        if(pq.size()>x)
        {
            pq.pop();
        }
    }
    while(pq.size()>0)
    {
        cout<<pq.top().second<<" ";
        pq.pop();
    }
}
int main()
{
    vector<int>arr={5,6,7,8,9};
    int k = 7;
    int x=3;
   kClosest(arr,k,x);
    return 0;
}