//Find num of rotation in an array
#include<bits/stdc++.h>
using namespace std;
int rot_num(int* arr,int n)
{
    int st=0;
    int e=n-1;
    int index=-1;
    int ans=INT_MAX;
    while(st<=e)
    {
        int mid=st+(e-st)/2;
    
        if(arr[st]<=arr[mid])
        {
            if(arr[st]<ans)
            {
                ans=arr[st];
                index=st;
            }
            st=mid+1;
        }
        else{
            if(arr[mid]<ans)
            {
                ans=arr[mid];
                index=mid;
            }
            e=mid-1;
        }
    }
    return index;
}
int main()
{
    int arr[]={4,5,6,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=rot_num(arr,n);
    cout<<a;

}