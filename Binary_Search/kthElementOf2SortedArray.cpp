#include<bits/stdc++.h>
using namespace std;
int findk(int *arr1,int *arr2,int k)
{
    int n1=6;
    int n2=4;
    int i=0;
    int j=0;
    int cnt=0;
    int ans=INT_MIN;
    while(i<n1 && j<n2)
    {
        if(cnt==k)
        {
            break;
        }
        else if(arr1[i]>arr2[j]){
            ans=arr2[j];
            j++;            
        }else{
            ans=arr1[i];
            i++;
        }
        cnt++;
    }
    return ans;
}
int main()
{
    int arr1[]={1,3,4,7,10,12};
    int arr2[]={2,3,6,15};
    int k=5;
    int ans=findk(arr1,arr2,k);
    cout<<ans;
    return 0;
}