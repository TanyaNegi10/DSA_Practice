#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,7,3,5,4,8,14,13,12,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0;
    int end=n-1;
    while(st<=end)
    {
        if(arr[st]%2==0)
        {
            st++;
        }else{
            swap(arr[st],arr[end]);
            end--;
        }        
    }
    for(auto ele:arr)
    {
        cout<<ele<<" ";
    }
    return 0;
}