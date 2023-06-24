//Sum of digits of a num using recursion

// #include<bits/stdc++.h>
// using namespace std;
// int dig_sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     int sum=0;
//     int r=n%10;
//    return r+dig_sum(n/10);

// }
// int main()
// {
//     cout<<dig_sum(23475);
//     return 0;
// }

//Print pattern using recursion
//1 2 3 4 5
//1 2 3 4
//1 2 3 
//1 2
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

// #include<bits/stdc++.h>
// using namespace std;
// void pattern(int n)
// {
//     if(n==1)
//     {
//         cout<<1<<" ";
//         cout<<endl;
//         return ;
//     }
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     pattern(n-1);
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;

// }
// int main()
// {
//     pattern(5);
//     return 0;
// }

//fibonacci series

#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    cout<<fibo(8);
    return 0;
}