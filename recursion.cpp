//Reverse an array through recursion

#include<bits/stdc++.h>
using namespace std;
void revers(int *arr,int n)
{
    if(n==0)
    {
        return;
    }
    cout<<arr[n-1]<<" ";
    revers(arr,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    revers(arr,n);
    return 0;
}

//Sum of n numbers through recursion

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int main()
// {
//     int ans=sum(6);
//     cout<<ans;
//     return 0;
// }
