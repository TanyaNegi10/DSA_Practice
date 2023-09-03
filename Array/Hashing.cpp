// Given an array of N integers , given q queries and in each query , given a num x, print frequency
// 1<=N<=10^5
// 1<=arr[i]<=10^7
// 1<=q<=10^5
// 10^5-->local array 
// 10^7-->Global array

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int main()
{
    cout<<"th"<<endl;
    int hsh[100]={0};
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    cout<<"Enter the number of queries"<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        cout<<"Enter the elements"<<endl;
        int x;
        cin>>x;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                cnt++;
            }
        }
        cout<<cnt<<" "<<hsh[x]<<endl;
    }
    return 0;
}