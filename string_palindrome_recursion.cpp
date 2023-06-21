#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(string s,int start,int end)
{
    if(start>end)
    {
        return true;
    }
    if(s[start]!=s[end])
    {
        return false;
    }
    else{
         return check_palindrome(s,start++,end--);
    }
}
int main()
{
    string s="abdeba";
    int n=s.size();
    int st=1;
    int e=n;
    if(check_palindrome(s,st,e))
    {
        cout<<"palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    return 0;
}