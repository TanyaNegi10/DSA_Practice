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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
                 if(arr[j]<arr[j-1])
                {
                    swap(arr[j],arr[j-1]);
                }
                else{
                         break;
                }

                
            
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}