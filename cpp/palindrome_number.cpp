#include<bits/stdc++.h>
using namespace std;
bool palindrome_check(int n)
{
    int original=n;
    int sum=0;
    while(n!=0)
    {
        int r=n%10;
        sum=sum*10+r;
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
    int n=791616177;

    //This will check the palindrome
    // if(palindrome_check(n))
    // {
    //     cout<<"Palindrome number";
    // }else{
    //     cout<<"Not a palindrome number";
    // }

    //This will generate 100 palindrome num
    int cnt=0;
    int i=1;
    while(cnt!=100)
    {
        int a=palindrome_check(i);
        if(a)
        {
            cout<<i<<" ";
            cnt++;
        }
        i++;
    }
    return 0;
}