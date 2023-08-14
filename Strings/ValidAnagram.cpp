//Brute force

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "anagram";
//     string t = "nagaram";

//     // string s = "aacc";
//     // string t = "ccac";
//     int i = 0;
//     int j = 0;
//     int ans = 1;
//     vector<int> v(s.length(), 0);
//     if (t.length() == s.length())
//     {
//         while (i < t.length())
//         {
//             char ch = t[i];
//             for (int k = 0; k < s.length(); k++)
//             {
//                 for (int ele : v)
//                 {
//                     cout << ele << " ";
//                 }
//                 cout << k << " " << ch << " " << s[k] << endl;
//                 if (ch != s[k] && k == s.length() - 1)
//                 {
//                     ans = 0;
//                     i = t.length();
//                     break;
//                 }
//                 if (ch == s[k] && v[k]==0)
//                 {
                   
//                         v[k]++;
//                         i++;
//                         break;                 
//                 }
//                 if (ch == s[k] && k == s.length() - 1)
//                 {
//                      ans = 0;
//                     i = t.length();
//                     break;
//                 }
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }


//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string &s1,string &s2)
{
    vector<int>freq(26,0);
    if(s1.length()!=s2.length())
    {
        return false;
    }
    for(int i=0;i<s1.length();i++)
    {
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "anagram";
    string t = "nagaram";

    // string s = "aacc";
    // string t = "ccac";

    bool ans=isAnagram(s,t);
    if(ans==true)
    {
        cout<<"Anagram Strings"<<endl;
    }
    else{
        cout<<"Not Annagram Strings"<<endl;
    }
    return 0;
}

//TC=O(length of s1)+O(26)
//SC=O(26)