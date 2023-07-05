// Brute force approach

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1, 0, 1, 2, -2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> temp;
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (arr[i] + arr[j] + arr[k]+arr[l] == 0)
                    {
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[k]);
                        temp.push_back(arr[l]);
                        sort(temp.begin(), temp.end());
                        s.insert(temp);
                        temp.clear();
                    }
                }
            }
        }
    }
    for (auto it : s)
    {
        for (auto k : it)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}

// T.C= O(n^4)
// S.C= O(no. of quadrulet)+O(one quadrulet)

// Optimal approach

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={-1, 0, 1, 2, -2, 0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int>temp;
//     set<vector<int>>st;
//     int target=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             set<int>s;
//             for(int k=j+1;k<n;k++)
//             {
//                 int fourth=target-(arr[i]+arr[j]+arr[k]);
//                 if(s.find(fourth)!=s.end())
//                 {
//                     temp.push_back(arr[i]);
//                     temp.push_back(arr[j]);
//                     temp.push_back(arr[k]);
//                     temp.push_back(fourth);
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                     temp.clear();
//                 }
//                 s.insert(arr[k]);
//             }
//         }
//     }

//     for(auto it:st)
//     {
//         for(auto k:it)
//         {
//             cout<<k<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// T.C= O(n*n*nlogn) = O(n^3)
// S.C= O(no. of quadruplets) *2 + O(k)

// Optimal Approach---> 2 pointers approach

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={-1, 0, 1, 2, -2, 0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     vector<int>temp;
//     vector<vector<int>>ans;
//     for(int i=0;i<n;i++)
//     {
//         if(i>0 && arr[i]==arr[i-1])
//         {
//             continue;
//         }
//         for(int j=i+1;j<n;j++)
//         {
//             if(j==i+1 && arr[j]==arr[j-1])
//             {
//                 continue;
//             }
//             int k=j+1;
//             int l=n-1;
//             while(k<l)
//             {
//                 int sum=arr[i]+arr[j];
//                 sum+=arr[k];
//                 sum+=arr[l];
//                 if(sum<0)
//                 {
//                     k++;
//                 }
//                 else if(sum>0)
//                 {
//                     l--;
//                 }
//                 else{
//                     temp.push_back(arr[i]);
//                     temp.push_back(arr[j]);
//                     temp.push_back(arr[k]);
//                     temp.push_back(arr[l]);
//                     ans.push_back(temp);
//                     temp.clear();
//                     k++;
//                     l--;
//                     while(k<l && arr[k]==arr[k-1])
//                     {
//                         k++;
//                     }
//                     while(k<l && arr[l]==arr[l+1])
//                     {
//                         l--;
//                     }
//                 }
//             }
//         }    
//     }
//     for(auto it:ans)
//     {
//         for(auto k:it)
//         {
//             cout<<k<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// T.C= O(n^3)+nlogn
// S.C= O(one quadruplet)
