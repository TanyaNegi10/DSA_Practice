#include<bits/stdc++.h>
using namespace std;
int max_element(int *arr,int n,int i)
{
    if(i==n-1)
    {
        return arr[i];
    }
    int maxi=arr[i];
    return max(maxi,max_element(arr,n,i+1));
}
int main()
{
    int arr[]={8,2,3,34,5};
    int n=5;
    int i=0;
    int ans=max_element(arr,n,i);
    cout<<ans;
}