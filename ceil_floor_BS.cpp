//find ceil and floor value
#include<bits/stdc++.h>
using namespace std;
int floor(int* arr,int n,int st,int e,int x)
{
    int ans=-1;

    while(st<=e)
    {
        int mid=(st+e)/2;
        if(arr[mid]<=x)
        {
            ans=arr[mid];
            st=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int ceil(int* arr,int n,int st,int e,int x)
{
    int ans=-1;

    while(st<=e)
    {
        int mid=(st+e)/2;
        if(arr[mid]>=x)
        {
            ans=arr[mid];
            e=mid-1;
        }else{
           st=mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={1,2,3,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0;
    int end=n-1;
    int x=6;
    int floor_val=floor(arr,n,st,end,x);
    int ceil_val=ceil(arr,n,st,end,x);
    cout<<"floor: "<<floor_val<<endl;
    cout<<"Ceil: "<<ceil_val;
}