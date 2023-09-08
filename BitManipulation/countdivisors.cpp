#include<bits/stdc++.h>
using namespace std;
//  const int N=1e6+10;
int main()
{
    int n=24;
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
            d=d*(n1+1);
            for(int j=2*i;j<n;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    
    cout<<"Total num of divisors of "<<temp<<" is "<<d;
    return 0;
}