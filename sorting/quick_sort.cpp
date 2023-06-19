#include <bits/stdc++.h>
using namespace std;
int findpartitionIndex(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >=low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void divide(int *arr,int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int partitionIndex=findpartitionIndex(arr,low,high);
    divide(arr,low,partitionIndex-1);
    divide(arr,partitionIndex+1,high);
}
int main()
{
    int arr[] = {9, 4, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;
    divide(arr, low, high);
    for(int ele:arr)
     {
        cout<<ele<<" ";
     }
}
