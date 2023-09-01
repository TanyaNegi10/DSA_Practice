// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
// Example 1:
// Input: heights = [2,1,5,6,2,3]
// Output: 10
// Explanation: The above is a histogram where width of each bar is 1.
// The largest rectangle is shown in the red area, which has an area = 10 units.

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int largeRecArea(vector<int>&heights)
    {
        int n=heights.size();
        stack<int>st;
        int leftsmall[n];
        int rightsmall[n];
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                leftsmall[i]=0;
            }else{
                leftsmall[i]=st.top()+1;
            }
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                rightsmall[i]=n-1;
            }else{
                rightsmall[i]=st.top()-1;
            }
            st.push(i);
        }
        int maxA=0;
        for(int i=0;i<n;i++)
        {
            maxA=max(maxA,heights[i]*(rightsmall[i]-leftsmall[i]+1));
        }
        return maxA;
    }
};
int main()
{
    vector<int>heights={2,1,5,6,2,3,1};
    Solution obj;
    cout<<"The largest area of the histogram is "<<obj.largeRecArea(heights);
    return 0;
}