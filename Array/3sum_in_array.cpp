//Brute force approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-1,0,1,2,-1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>temp;
    set<vector<int>>s;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==0)
                {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                    temp.clear();
                }
            }
        }
    }
    for(auto it:s)
    {
        for(auto k:it)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//T.C= O(n^3)+O(no. of pair)
//S.C= O(no. of triplet)+O(no. of triplets)


//Optimal approach

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={-1,0,1,2,-1,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int>temp;
//     set<vector<int>>st;
//     for(int i=0;i<n;i++)
//     {
//         set<int>s;
//         for(int j=i+1;j<n;j++)
//         {
//             int third=-(arr[i]+arr[j]);
//             if(s.find(third)!=s.end())
//             {
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[j]);
//                 temp.push_back(third);
//                 sort(temp.begin(),temp.end());
//                 st.insert(temp);
//                 temp.clear();
//             }
//             s.insert(arr[j]);
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

//T.C= O(n*nlogn) = O(n^2)
//S.C= O(no. of triplets) *2 + O(j)

//Optimal Approach---> 2 pointers approach

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={-1,0,1,2,-1,4};
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
//         int j=i+1;
//         int k=n-1;
//         while(j<k)
//         {
//             int sum=arr[i]+arr[j]+arr[k];
//             if(sum<0)
//             {
//                 j++;
//             }
//             else if(sum>0)
//             {
//                 k--;
//             }
//             else{
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[j]);
//                 temp.push_back(arr[k]);
//                 ans.push_back(temp);
//                 temp.clear();
//                 j++;
//                 k--;
//                 while(j<k && arr[j]==arr[j-1])
//                 {
//                     j++;
//                 }
//                 while(j<k && arr[k]==arr[k+1])
//                 {
//                     k--;
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

//T.C= O(n^2)+nlogn
//S.C= O(one triplet)

