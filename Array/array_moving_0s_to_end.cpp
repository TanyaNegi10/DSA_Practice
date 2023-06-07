// Move zeroes to the end
// 1st approach

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={2,0,1,5,0,3,0,9,5,0,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> temp;
//     int nz=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//             temp.push_back(arr[i]);
//             nz++;
//         }
//     }
//     for(int i=0;i<temp.size();i++)
//     {
//         arr[i]=temp[i];
//     }
//     for(int i=nz;i<n;i++)
//     {
//         arr[i]=0;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// TC= O(n)+O(k)+O(n-k) = O(2n)


//2nd approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,0,1,5,0,3,0,9,5,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=-1;
    for(int i=0;i<n;i++)          //O(x)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)              //O(n-x)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int ele:arr)
    {
        cout<<ele<<" ";
    }
}

// TC= O(x) + O(n-x) = O(n)



