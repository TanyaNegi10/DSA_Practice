#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    if(n==0 || n==1)
    {
        return -1;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return -1;
        }
        else{
            return 1;
        }

    }
}
int main()
{
    cout<<"hello world"<<endl;
    int n;
    cout<<"Enter the number";
    
    cin>>n;
    int ans=prime(n);
    if(ans==1)
    {
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not prime";
    }
}