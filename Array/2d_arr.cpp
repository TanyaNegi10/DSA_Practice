#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,
               4,5,6,
               7,8,9};
    int target=5;
    vector<int>ans;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    for(auto el:ans)
    {
        cout<<el;
    }
    return 0;
}
