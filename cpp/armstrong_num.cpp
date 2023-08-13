#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n)
{
    int duplicate=n;
    int original=n;
    int count=0;
    int sum=0;
    while(duplicate!=0)
    {
        duplicate=duplicate/10;
        count++;
    }
    while(n!=0)
    {
        int r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    if(original==sum)
    {
        return true;
    }
return false;

}
int main()
{
    int n=1633;
    if(armstrong(n))
    {
        cout<<"Armstrong number";
    }else{
        cout<<"Not an armstrong number";
    }
    return 0;
}
