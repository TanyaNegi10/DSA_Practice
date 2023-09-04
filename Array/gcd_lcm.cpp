#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=36;
    int n2=24;
    int t1=n1;
    int t2=n2;
    int gcd=0;
    // for(int i=min(n1,n2);i>=1;i--)
    // {
    //     if(n1%i==0 && n2%i==0)
    //     {
    //         gcd=i;
    //         cout<<i<<endl;
    //         break;
    //     }
    // }

    while(n1!=0 && n2!=0)
    {
        if(n1>n2)
        {
            n1=n1%n2;
        }else{
            n2=n2%n1;
        }
    }
    if(n1==0)
    {
        gcd=n2;
    }else{
        gcd=n1;
    }
    cout<<gcd<<endl;
    int lcm=(t1*t2)/gcd;
    cout<<lcm;
    return 0;
}