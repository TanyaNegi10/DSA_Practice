#include<bits/stdc++.h>
using namespace std;
int count_zero(int n,int cnt)
{
    if(n==0)
    {
         return cnt;
    }
    
    if(n%10==0)
    {
        cnt++;
    }
        return count_zero(n/10,cnt);
    
}
int main()
{
    int n=20490105;
    int c=0;
    int ans=count_zero(n,c);
    cout<<ans;

}