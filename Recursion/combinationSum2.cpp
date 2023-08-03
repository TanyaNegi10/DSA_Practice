// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

// Input: candidates = [10,1,2,7,6,1,5], target = 8
// Output: 
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]
// ]

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void combinationSum2(int ind,int target,vector<int>arr,vector<int>ds)
{
    if(target==0)
    {
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<arr.size();i++)
    {
        if(i>ind && arr[i]==arr[i-1])
        {
            continue;
        }
        if(arr[i]>target)
        {
            break;
        }
        ds.push_back(arr[i]);
        combinationSum2(i+1,target-arr[i],arr,ds);
        ds.pop_back();
    }       
}
int main()
{
    // Ex-1
    vector<int>arr={10,1,2,7,6,1,5};   
    int target=8;
    sort(arr.begin(),arr.end());     //1 1 2 5 6 7 10

    

    vector<int>ds;
    combinationSum2(0,target,arr,ds);
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