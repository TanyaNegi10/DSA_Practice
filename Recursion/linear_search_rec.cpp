#include<bits/stdc++.h>
using namespace std;
int search(int *arr,int n,int target,int i)
{

    if(i>=n){
        return -1;
    }
    if(arr[i]==target)
    {
        return i;
    }
    else{
        return search(arr,n,target,i+1);
    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int target=3;
    int i=0;
    int ans=search(arr,n,target,i);
    cout<<ans;

}