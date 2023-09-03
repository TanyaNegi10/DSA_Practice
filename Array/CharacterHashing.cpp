#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hsh[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        hsh[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hsh[c-'a']<<" ";
    }
    return 0;
}