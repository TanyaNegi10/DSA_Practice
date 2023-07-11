//Brute force

#include<bits/stdc++.h>
using namespace std;
int maxi(int* arr,int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    return m;
}
int mini(int* arr,int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<m)
        {
            m=arr[i];
        }
    }
    return m;
}
bool cancut(int* arr,int n,int height,int t)
{
    int last_tree=arr[0];
    int rem=0;
    int least=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>height)
        {
            rem=arr[i]-height;
            least+=rem;
        }
    }
    if(least>=t)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[]={4,42,40,26,46};          
    int n=5;
    int t=20;
    int max=maxi(arr,n);
    int min=mini(arr,n);
    int ans=0;
    for(int i=min;i<=max;i++)
    {
        bool check=cancut(arr,n,i,t);
        if(check==true)
        {
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}


//Optimal Approach
// #include<bits/stdc++.h>
// #define int long long
// using namespace std;
// int maxi(int* arr,int n)
// {
//     int m=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>m)
//         {
//             m=arr[i];
//         }
//     }
//     return m;
// }
// int mini(int* arr,int n)
// {
//     int m=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<m)
//         {
//             m=arr[i];
//         }
//     }
//     return m;
// }
// bool cancut(int* arr,int n,int height,int t)
// {
//     int last_tree=arr[0];
//     int rem=0;
//     int least=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>height)
//         {
//             rem=arr[i]-height;
//             least+=rem;
//         }
//     }
//     if(least>=t)
//     {
//         return true;
//     }else{
//         return false;
//     }
// }

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     int t;
//     cin>>n >>t;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }            
//     int max=maxi(arr,n);
//     int min=mini(arr,n);
//     int ans=0;
//     int st=min;
//     int end=max;
//     while(st<=end)
//     {
//         int mid=st+(end-st)/2;
//         bool check=cancut(arr,n,mid,t);
//         if(check==true)
//         {
//             ans=mid;
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     cout<<ans;
//     return 0;
// }