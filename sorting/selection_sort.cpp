//Using max element
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         int max=n-i-1;                          
//         for(int j=0;j<=n-i-1;j++)
//         {
//             if(arr[j]>arr[max])
//             {
//                 max=j;
//             }
//             swap(arr[max],arr[n-i-1]);
//         }
        
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

//Using min element
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
    

    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
                
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
