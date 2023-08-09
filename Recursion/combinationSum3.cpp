#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void combinationSum3(int ind,int n,vector<int>ds,vector<int>arr,int k)
{
    if(n==0 && ds.size()==k)
    {
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<arr.size();i++)
    {
        if(arr[i]>n)
        {
            break;
        }
        ds.push_back(arr[i]);
        combinationSum3(i+1,n-arr[i],ds,arr,k);
        ds.pop_back();
    }       
}
int main()
{
   vector<int>ds;
   vector<int>arr={1,2,3,4,5,6,7,8,9};

   // Ex-1
//    int k=3;
//    int n=7;

   // Ex-1
   int k=3;
   int n=9;
   combinationSum3(0,n,ds,arr,k);

    for(int i=0;i<ans.size();i++)
    {
        for(auto ele:ans[i])
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}