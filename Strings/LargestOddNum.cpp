#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num="42067";
    int n=num.length();
    string res="";
    for(int i=n-1;i>=0;i--)
    {
        char c=num[i];
        int n=c-'0';
        if(n%2!=0)
        {
            res=num.substr(0,i+1);
            cout<<res;
            break;
        }
    }
}