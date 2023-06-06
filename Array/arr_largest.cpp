// Find 2nd largest num 

//Brute force approach

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     int largest=arr[n-1];
//     int sl=-1;
//     for(int i=n-2;i>=0;i--)
//     {
//         if(arr[i]!=largest)
//         {
//             sl=arr[i];
//             break;
//         }
//         else{
//             continue;
//         }
//     }
//     cout<<sl<<endl;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int largest=0;
    // for(int i=0;i<n;i++)
    // {
    //     int l=0;
    //     if(arr[i]>arr[l])
    //     {
    //          largest=arr[i];
    //     }
    // }
    // int sl=-1;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]!=largest && arr[i]>sl)
    //     {
    //         sl=arr[i];
    //     }
    // }
    // cout<<sl<<endl;
    int sl=-1;
    for(int i=0;i<n;i++)
    {
        int l=0;
        if(arr[i]>arr[l] || arr[i]!=largest && arr[i]>sl)
        {
             largest=arr[i];
             sl=arr[i];
        }
    }
    cout<<sl<<endl;
}

