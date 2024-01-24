//Brute forceapproach

// #include<bits/stdc++.h>
// using namespace std;
// int minimum(int * arr,int n)
// {
//     int mini=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<mini)
//         {
//             mini=arr[i];
//         }
//     }
//     return mini; 
// }
// int maximum(int * arr,int n)
// {
//     int maxi=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>maxi)
//         {
//             maxi=arr[i];
//         }
//     }
//     return maxi; 
// }
// bool isbloomsday(int *arr,int n,int day,int m,int k)
// {
//     int cnt=0;
//     int boquets=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<=day)
//         {
//             cnt++;
//         }else{
//             boquets+=(cnt/k);
//             cnt=0;
//         }
//     }
//     boquets+=(cnt/k);
//     if(boquets>=m)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int arr[]={7,7,7,7,13,11,12,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int ans=-1;
//     int mx=maximum(arr,n);
//     int mi=minimum(arr,n);

//     int m=2;
//     int k=3;

//     if(n<(m*k))
//     {
//         ans=-1;
//     }
//     for(int i=mi;i<=mx;i++)
//     {
//         bool val=isbloomsday(arr,n,i,m,k);
//         if(val)
//         {
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }

//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int minimum(int * arr,int n)
{
    int mini=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    return mini; 
}
int maximum(int * arr,int n)
{
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi; 
}
bool isbloomsday(int *arr,int n,int day,int m,int k)
{
    int cnt=0;
    int boquets=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=day)
        {
            cnt++;
        }else{
            boquets+=(cnt/k);
            cnt=0;
        }
    }
    boquets+=(cnt/k);
    if(boquets>=m)
    {
        return true;
    }
    return false;
}
int main()
{
    //Ex-1
    int arr[]={7,7,7,7,13,11,12,7};
    int m=2;
    int k=3;

    //Ex-2
    // int arr[]={1,10,3,10,2};
    // int m=3;
    // int k=2;

    int n=sizeof(arr)/sizeof(arr[0]);
    // int ans=-1;
    int mx=maximum(arr,n);
    int mi=minimum(arr,n);


    // if(n<(m*k))
    // {
    //     ans=-1;
    // }
    int st=mi;
    int e=mx;
    while(st<=e)
    {
        int mid=st+(e-st)/2;
        bool val=isbloomsday(arr,n,mid,m,k);
        if(val)
        {
           e=mid-1;
        }else{
            st=mid+1;
        }
    }
    int ans=(st==mx+1?-1:st);
    cout<<ans<<endl;
    return 0;
}