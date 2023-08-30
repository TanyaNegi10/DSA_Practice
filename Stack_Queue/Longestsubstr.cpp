// Given a string s, find the length of the longest substring without repeating characters. 
// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.


//Brute force
// #include<bits/stdc++.h>
// using namespace std;
// int findlength(string str)
// {
//     if(str.size()==0)
//     {
//         return 0;
//     }
//     int length=INT_MIN;
//     for(int i=0;i<str.size();i++)
//     {
//         unordered_set<char>s;
//         for(int j=i;j<str.length();j++)
//         {
//             if(s.find(str[j])!=s.end())
//             {
//                 length=max(length,j-i);
//                 break;
//             }else{
//                 s.insert(str[j]);
//             }
//         }
//     }
//     return length;
// }
// int main()
// {
//     // string str = "hello";
//     string str = "abcabcbb";
//     int ans = findlength(str);
//     cout << ans << endl;
//     return 0;
// }

//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int solve(string str)
{
    int n=str.length();

    vector<int>mp(256,-1);
    int left=0;
    int right=0;
    int len=INT_MIN;
    while(right<n)
    {
        if(mp[str[right]]!=-1)
        {
            left=max(mp[str[right]]+1,left);
        }
        mp[str[right]]=right;
        len=max(len,right-left+1);
        right++;
    }
    return len;

}
int main()
{
    // string str = "hello";
    string str = "abcabcdbb";
    int ans = solve(str);
    cout << ans << endl;
    return 0;
}
