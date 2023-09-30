// Find the largest and 2nd largest num 

//Brute force approach

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
    sort(arr,arr+n);
    int largest=arr[n-1];
    int sl=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]!=largest)
        {
            sl=arr[i];
            break;
        }
        else{
            continue;
        }
    }
    cout<<sl<<endl;
}
//TC=O(n^2)

//Optimal Approach
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={23,12,3,65,31};
//     int n=5;
//     int largest=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//     }
//     cout<<"Largest is "<<largest<<endl;
//     int sl=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>sl && arr[i]!=largest)
//         {
//             sl=arr[i];
//         }
//     }
//     cout<<"Second largest is "<<sl<<endl;
//     return 0;
// }
//TC=O(2n)

//More optimal approach
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={12,6,3,56,21};
//     int n=5;
//     int l=-1;
//     int sl=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>l)
//         {
//             sl=l;
//             l=arr[i];
//         }else if(arr[i]<l && arr[i]>sl)
//         {
//             sl=arr[i];
//         }
//     }
//     cout<<sl;
//     return 0;
// }
//TC=O(n)
