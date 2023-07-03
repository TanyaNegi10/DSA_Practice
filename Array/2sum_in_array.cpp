//Brute force approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,4,1,3,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        for(int j=i+1;j<n;j++)
        {
            int sum=num+arr[j];
            if(sum==target)
            {
                cout<<num<<" "<<arr[j]<<endl;
                break;
            }
        }
    }

}

//T.C= O(n^2)
//S.C=O(1)


//Optimal Approach

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={2,4,1,3,6,8,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int target=9;
//     map<int,int>m;
//     for(int i=0;i<n;i++)
//     {
//         int num=arr[i];
//         int req=target-num;
//         if(m.find(req)!=m.end())
//         {
//             cout<<req<<" "<<num<<endl;
//             continue;
//         }
//         m[num]=i;
//     }
//     return 0;
// }

//T.C= O(n^2)--->worst case(unordered map)
//T.C= O(nlogn)    
//S.C= O(N)  
