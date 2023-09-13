// Ex: arr={5,4,1,2} --> ans=3

// Brute force

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {5, 4, 1, 2};
//     int n = 5;
//     for (int i = 1; i < n; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == i)
//             {
//                 flag = 1;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

//Optimal Approach
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={5,4,1,2,2,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int hsh[n+1]={0};
//     for(int i=0;i<n;i++)
//     {
//         hsh[arr[i]]++;
//     }
//     for(int j=1;j<=n;j++)
//     {
//         if(hsh[j]==0)
//         {
//             cout<<j<<" ";
//         }
//     }
//     return 0;
// }

//One more optimized
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,2,1,3};
    int n=5;
    int xor1=0;
    for(int i=1;i<=n;i++)
    {
        xor1^=i;
    }
    int xor2=0;
    for(int i=0;i<n-1;i++)
    {
        xor2^=arr[i];
    }
    int ans=xor1^xor2;
    cout<<ans;
    return 0;
}
