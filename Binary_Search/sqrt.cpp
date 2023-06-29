//Find square root of a number using binary search
#include<bits/stdc++.h>
using namespace std;
int sqrt(int n)
{
    int st=0;
    int e=n-1;
    while(st<=e)
    {
        int mid=(st+e)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
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
    int n=49;
    int ans=sqrt(n);
    cout<<ans;

}
