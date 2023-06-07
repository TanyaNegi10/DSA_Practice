// find unique num in an array

#include <bits/stdc++.h>
    using namespace std;
int findunique(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = k ^ arr[i];
    }
    return k;
}
int main()
{
    cout << "Enter the size of array ";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter the elements in array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unique element is " << findunique(arr, n);
}
