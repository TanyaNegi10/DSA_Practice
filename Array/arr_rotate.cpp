//Rotate array 1 times

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
//     int temp=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

//Rotate array according to the number of rotation

//1st approach

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
//     int k;
//     cout<<"enter num of rotation";
//     cin>>k;
//     k=k%n;
//     for(int i=k;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<k;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//2nd approach

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
    int k;
    cout<<"enter num of rotation";
    cin>>k;
    k=k%n;
    reverse(arr,arr+n);
    reverse(arr,arr+(n-k));
    reverse(arr+(n-k),arr+n);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}