//Rotate array 1 time
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


//Move zeroes to the end


//1st approach
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
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[]={2,0,1,5,0,3,0,9,5,0,1};
    // int n=sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    {
        while(s<=e)
        {
            if(arr[s]!=0)
            {
                s++;
            }
            else if(arr[e]==0)
            {
                e--;
            }
            else{
                swap(arr[s],arr[e]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

