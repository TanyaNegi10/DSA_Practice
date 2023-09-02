#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    int cnt=0;
    int tempBit=1;
    for(int i=4;i>=0;i--)
    {
        if((n & (1<<i))!=0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}