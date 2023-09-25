//Sort the k sorted array
#include <bits/stdc++.h>
using namespace std;
vector<int>ksort(int *arr,int n,int k)
{
    priority_queue<int, vector<int>, greater<int>> q;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        q.push(arr[i]);
        if(q.size()>k)
        {
            ans.push_back(q.top());
            q.pop();
        }
    }
    while(!q.empty())
    {
        ans.push_back(q.top());
        q.pop();
    }
    return ans;
}
int main()
{
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> ans=ksort(arr,n,k);
    for(auto ele:ans)
    {
        cout<<ele<<" ";
    }

    return 0;
}