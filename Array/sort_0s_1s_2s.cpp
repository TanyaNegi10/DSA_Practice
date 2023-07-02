//Brute force

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int e:arr)
    {
        cout<<e<<" ";
    }
    return 0;
}

//T.C=>O(nlogn)
//S.C=>O(1)

//Optimal Approach
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int cnt0=0;
//     int cnt1=0;
//     int cnt2=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         {
//             cnt0++;
//         }
//         else if(arr[i]==1)
//         {
//             cnt1++;
//         }else{
//             cnt2++;
//         }
//     }
//     for(int i=0;i<cnt0;i++)
//     {
//         arr[i]=0;
//     }
//     for(int i=cnt0;i<cnt0+cnt1;i++)
//     {
//         arr[i]=1;
//     }
//     for(int i=cnt0+cnt1;i<n;i++)
//     {
//         arr[i]=2;
//     }
//     for(int e:arr)
//     {
//         cout<<e<<" ";
//     }
//     return 0;
// }

//T.C=>O(n+n)=O(2n)=>O(n)
//S.C=>O(1)

//Optimal approach
// Dutch national flag algorithm (DNF)
// 3 pointers

// low,mid,high

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int low=0;
//     int mid=0;
//     int high=n-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[mid]==0)
//         {
//             swap(arr[mid],arr[low]);
//             mid++;
//             low++;
//         }
//         else if(arr[mid]==2)
//         {
//             swap(arr[mid],arr[high]);
//             high--;
//         }
//         else{
//             mid++;
//         }
//     }
//     for(int e:arr)
//     {
//         cout<<e<<" ";
//     }
//     return 0;
// }
//T.C=>O(n)
//S.C=>O(1)