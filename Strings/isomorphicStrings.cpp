#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s,string t)
{
    unordered_map<char,char>map1;
    unordered_map<char,char>map2;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(map1.find(s[i])!=map1.end() && map1[s[i]]!=t[i])
        {
            return false;
        }
        if(map2.find(t[i])!=map2.end() && map2[t[i]]!=s[i])
        {
            return false;
        }
        map1[s[i]]=t[i];
        map2[t[i]]=s[i];
    }
    return true;
}
int main()
{
    string s="egg";
    string t = "add";
    
    bool ans=isIsomorphic(s,t);
    cout<<ans;
    return 0;
}