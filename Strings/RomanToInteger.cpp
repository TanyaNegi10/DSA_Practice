#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    map<char,int>::iterator it;
    m.insert({'I',1});
    m.insert({'V',5});
    m.insert({'X',10});
    m.insert({'L',50});
    m.insert({'C',100});
    m.insert({'D',500});
    m.insert({'M',1000});

    string s="MCMXCIV";
    int res=0;
    int sum=0;
    for(int i=s.length()-1;i>=0;i--)
    {   
        
        auto it=m.find(s[i]);
        if(it!=m.end())
        {
            if((*it).second>=res)
            {
                sum+=(*it).second;
                res=(*it).second;
            }else{
                sum-=(*it).second;
                res=(*it).second;
            }
        }
    }
    // for(it=m.begin();it!=m.end();it++)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    cout<<sum;
    return 0;
}