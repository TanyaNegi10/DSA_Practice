//Swapping two number without using third variable
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int b=23;
    cout<<"Before swapping "<<a<<" "<<b<<endl;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<"After swapping "<<a<<" "<<b<<endl;
    return 0;
}