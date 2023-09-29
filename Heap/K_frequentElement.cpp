//Find the k frequents element
#include<bits/stdc++.h>
using namespace std;
void freqEle(vector<int>&v,int k)
{
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto it=m.begin();it!=m.end();it++)
    {
        pq.push({it->second,it->first});
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top().second<<" ";
        pq.pop();
    }
}
int main()
{
    vector<int>v={1,1,1,3,2,2,4,4,4};
    int k=2;
    freqEle(v,k);
    return 0;
}