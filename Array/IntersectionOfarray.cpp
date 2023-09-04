//Intersection of two sorted array
//Ex-    arr1={1,1,2,3,3,4,4,4,5,6,6,7}
//       arr2={1,2,2,3,4,5,7}
//      ans={1,2,3,4,5,7}


//Brute force
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //Ex-1
//     // int arr1[]={1,2,2,3,3,4,4,5,5,6,7};
//     // int arr2[]={2,3,3,5,6,6,7,8};

//     //Ex-2
//     int arr1[]={1,1,2,3,3,4,4,4,5,6,6,7};
//     int arr2[]={1,2,2,3,4,5,7};

//     int n1=sizeof(arr1)/sizeof(arr1[0]);
//     int n2=sizeof(arr2)/sizeof(arr2[0]);
//     int vis[n2]={0};
//     vector<int>ans;
//     for(int i=0;i<n1;i++)
//     {
//         for(int j=0;j<n2;j++)
//         {
//             if(arr1[i]==arr2[j] && vis[j]==0)
//             {
//                 ans.push_back(arr1[i]);
//                 vis[j]=1;
//                 break;
//             }
//             if(arr2[j]>arr1[i])
//             {
//                 break;
//             }
//         }
//     }
//     for(int ele:ans)
//     {
//         cout<<ele<<" ";
//     }    
//     return 0;
// }
//TC=O(n1*n2)      SC=O(n2)

//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Ex-1
    // int arr1[]={1,2,2,3,3,4,4,5,5,6,7};
    // int arr2[]={2,3,3,5,6,6,7,8};

    //Ex-2
    int arr1[]={3,5,5,7,8,10,12};
    int arr2[]={5,5,9,10,12,14};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);    
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            j++;
        }else if(arr1[i]<arr2[j])
        {
            i++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int ele:ans)
    {
        cout<<ele<<" ";
    }
    return 0;
}
//TC=O(n1+n2)     SC=O(1)