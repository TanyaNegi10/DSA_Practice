#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="My name is Taniya Negi";
    cout<<s<<endl;

    char ss[10]="CharArray";
    cout<<ss<<endl;

    //Adding two strings
    string s1="one";
    string s2="two";
    string res=s1+s2;
    cout<<res<<endl;

    //Append two strings
    s2+=s1;
    cout<<s2<<endl;

    //Substring
    string st="hello";
    cout<<st.substr(2,4)<<endl;

    st.push_back('s');
    cout<<st<<endl;
    return 0;
}
