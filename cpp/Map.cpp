#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int arr[]={2,6,1,4,2,6,7,1,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}