// //Brute force
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
// bool distance(int* arr,int n,int distance,int cows)
// {
//     int last_cow=arr[0];
//     int count=1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]-last_cow>=distance)
//         {
//             count++;
//             last_cow=arr[i];
//         }
//     }
//     if(count>=cows)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     //int arr[]={0,3,4,7,10,9};
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int cows=4;
//     int max=maxi(arr,n);
//     int min=mini(arr,n);
//     int ans=-1;
//     for(int i=1;i<=max-min;i++)
//     {
//         bool min_dis=distance(arr,n,i,cows);
//         if(min_dis==true)
//         {
//             continue;
//         }else{
//             ans=i-1;
//             break;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

// optimal approach
#include <bits/stdc++.h>
using namespace std;
bool distance(int *arr, int n, int distance, int cows)
{
    int count = 1;
    int last_cow = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - last_cow >= distance)
        {
            count++;
            last_cow = arr[i];
        }
        if (count >= cows)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int cows;
        cin >>n>>cows;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int max = arr[n - 1];
        int min = arr[0];
        int st = 1;
        int e = max - min;
        while (st <= e)
        {
            int mid = st + (e - st) / 2;
            bool min_dis = distance(arr, n, mid, cows);
            if (min_dis == true)
            {
                st = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << e<<endl;
    }
    return 0;
}
