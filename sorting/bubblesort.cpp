#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }
    cout<<"After sort";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}