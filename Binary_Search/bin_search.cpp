#include<bits/stdc++.h>
using namespace std;
int search(int* arr,int n,int target)
{
    int st=0;
    int e=n-1;
    while(st<=e)
    {
        int mid=(st+e)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target<arr[mid])
        {
            e=mid-1;
        }else{
            st=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={23,45,67,69,70,89};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=45;
    int ans=search(arr,n,target);
    if(ans>=0)
    {
        cout<<target<<" found at index "<<ans;
    }else{
        cout<<"Element not found";
    }

}