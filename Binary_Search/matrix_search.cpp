//Brute force
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>>matrix={{10,20,30,40},{11,21,36,43},{25,29,39,50},{50,60,70,80}};
//     int target=21;
//     int n=matrix.size();
//     int m=matrix[0].size();
//     for(int i=0;i<n;i++)
//     {
//         int st=0;
//         int end=m-1;
//         while(st<=end)
//         {
//             int mid=(st+end)/2;
//             if(matrix[i][mid]==target)
//             {
//                 cout<<i <<" "<< mid;
//                 break;
//             }
//             else if(matrix[i][mid]>target)
//             {
//                 end=mid-1;
//             }else{
//                 st=mid+1;
//             }
//         }
//     }

//     return 0;
// }

//optimised approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>matrix={{10,20,30,40},{11,21,36,43},{25,29,39,50},{50,60,70,80}};
    int target=39;
    int n=matrix.size();
    int m=matrix[0].size();
    int i=m-1;
    int j=0;
    while(i>=0 && j<n)
    {
        if(matrix[j][i]==target)
        {
            cout<<j <<" "<<i;
            break;
        }
        else if(matrix[j][i]>target)
        {
            i--;
        }else{
            j++;
        }
    }
    return 0;
}

//T.C= O(log(m*n))
//S.C=O(1)