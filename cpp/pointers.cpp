#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=5;
    int *p=&x;
    cout<<&x<<endl;
    cout<<*p<<endl;
    *p=7;
    cout<<x<<endl;
    int **p_x=&p;
    cout<<&p<<endl;
    cout<<p_x<<endl;
    cout<<*p_x<<endl;
    cout<<**p_x<<endl;
    cout<<endl;
    
    int a[10];
    a[0]=2;
    a[1]=4;
    a[2]=11;
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    cout<<a+1<<endl;
    cout<<&a[1]<<endl;
    cout<<a+2<<endl;
    cout<<&a[2]<<endl;
}
