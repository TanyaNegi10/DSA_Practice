//Brute force
// #include<bits/stdc++.h>
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
// bool check_k(int* arr,int n,int k,int h)
// {
//     int s=0;
//     for(int i=0;i<n;i++)
//     {
//         int b=ceil(double(arr[i])/double(k));
//         s+=b;
//     }
//     if(s<=h){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main()
// {
//     int arr[]={30,11,23,4,20};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int h=5;
//     int max=maxi(arr,n);
//     int ans=-1;
//     for(int i=1;i<=max;i++)
//     {
//         if(check_k(arr,n,i,h)==true){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans;
//     return 0;
// }
//T.C=>O(max(arr)*n)
//S.C=>O(1)

//Optimal approach

// #include<bits/stdc++.h>
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
// int check_k(int* arr,int n,int k)
// {
//     int s=0;
//     for(int i=0;i<n;i++)
//     {
//         int b=ceil(double(arr[i])/double(k));
//         s+=b;
//     }
//     return s;
// }
// int main()
// {
//     int arr[]={30,11,23,4,20};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int h=6;
//     int max=maxi(arr,n);
//     int ans=-1;
//     int start=0;
//     int end=max;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         int k=check_k(arr,n,mid);
//          if(k<=h){
//             ans=mid;
//             end=mid-1;
//         }else{
//             start=mid+1;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

//T.C=log2(max)*O(n)
//S.C=O(1)

#include<bits/stdc++.h>
using namespace std;
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max=*max_element(piles.begin(),piles.end());
        int start=0;
        int end=max;
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int s=0;
            for(int i=0;i<n;i++)
            {
                int b=ceil(double(piles[i])/double(mid));
                s+=b;
            }
            if(s<=h)
            {
                ans= mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
    int main()
    {
        vector<int> piles={3,6,7,11};
        int h=8;
        int ans=minEatingSpeed(piles,h);
        cout<<ans;
        return 0;
    }
