// Remove duplicates in place from sorted array

//Brute force
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,1,2,2,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    int it=0;
    for(auto ele:s)
    {
        arr[it]=ele;
        it++;
    }
    for(auto ele:arr)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}

//TC=(nlogn)+O(n)                 SC=O(n)

//Optimal approach
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={1,1,2,2,3,3,3};
//     vector<int>ans;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     for(int j=i+1;j<n;j++)
//     {
//         if(arr[j]!=arr[i])
//         {
//             arr[i+1]=arr[j];
//             i++;
//         }
//     }
//     for(auto ele:arr)
//     {
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     cout<<i+1;
//     return 0;
// }

// TC=O(n)           SC=O(1)