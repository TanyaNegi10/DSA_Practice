#include<bits/stdc++.h>
using namespace std;
void revers(int *arr,int n)
{
    if(n==0)
    {
        return;
    }
    cout<<arr[n-1];
    revers(arr,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    revers(arr,n);
    for(int ele:arr)
    {
        cout<<ele;
    }

}