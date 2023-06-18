#include<bits/stdc++.h>
using namespace std;
void merge(int* arr,int n,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int>v;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            v.push_back(arr[left]);
            left++;
        }
        else{
            v.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        v.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        v.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=v[i-low];
    }

}
void divide( int* arr,int n,int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=(high+low)/2;
    divide(arr,n,low,mid);
    divide(arr,n,mid+1,high);
    merge(arr,n,low,mid,high);
}

int main()
{
    int arr[]={5,2,4,1,8};
    int n=5;
     int st=0;
     int e=n-1;
     divide(arr,n,st,e);
     for(int ele:arr)
     {
        cout<<ele<<" ";
     }
    return 0;
}