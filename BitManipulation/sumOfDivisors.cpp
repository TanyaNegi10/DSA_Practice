#include<bits/stdc++.h>
using namespace std;
//  const int N=1e6+10;
int main()
{
    int n=36;
    int temp=n;
    vector<bool>isprime(n,1);
    int d=1;
    isprime[0]=isprime[1]=false;
    for(int i=2;i<=n;i++)
    {
        int n1=0;
        if(isprime[i]==true)
        {
            while(n%i==0)
            {
                n1++;
                n=n/i;
            }
            // cout<<"n1 "<<n1;
            int p=pow(i,(n1+1))-1;
            p=p/(i-1);
            // cout<<"p "<<p<<endl;
            d=d*p;
            for(int j=2*i;j<n;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    // for(int i=0;i<10;i++)
    // {
    //     cout<<i<<" "<<isprime[i]<<endl;
    // }
    cout<<"Sum of divisors of "<<temp<<" is "<<d;
    return 0;
}