//Find the number whose power t is equal to the given number
//Given-- x=256 ,t=4   ans=4
#include<bits/stdc++.h>
using namespace std;
int power(int mid,int t)
{
    int m=1;
    for(int i=0;i<t;i++)
    {
        m=m*mid;
    }
    return m;
}
int sqrt(int num,int t)
{
    int st=0;
    int e=num-1;
    while(st<=e)
    {
        int mid=(st+e)/2;
        if(power(mid,t)==num)
        {
            return mid;
        }
        else if(power(mid,t)<num)
        {
            st=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int num=256;
    int t=4;
    int ans=sqrt(num,t);
    cout<<ans;

}
