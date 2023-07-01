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
    if(palindrome_check(n))
    {
        cout<<"Palindrome number";
    }else{
        cout<<"Not a palindrome number";
    }
    return 0;
}