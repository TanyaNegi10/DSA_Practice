// #include <bits/stdc++.h>
// using namespace std;
// void heapify(int arr[], int n, int i)
// {
//     int l = i;
//     int left = 2 * i;
//     int right = 2 * i + 1;
//     if (left <= n && arr[left] > arr[l])
//     {
//         l = left;
//     }
//     if (right <= n && arr[right] > arr[l])
//     {
//         l = right;
//     }
//     if (l != i)
//     {
//         swap(arr[l], arr[i]);
//         heapify(arr, n, l);
//     }
// }
// void heapsort(int arr[], int n)
// {
//     int x = n;
//     while (x > 1)
//     {
//         swap(arr[x], arr[1]);
//         x--;
//         heapify(arr, x, 1);
//     }
// }

// int main()
// {
//     int arr[] = {-1, 12, 11, 13, 5, 6, 7};
//     int n = 6;
//     for (int i = n / 2; i > 0; i--)
//     {
//         heapify(arr, n, i);
//     }
//     cout<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     heapsort(arr,n);
//     cout<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int l = i;
    int left = 2 * i+1;
    int right = 2 * i + 2;
    if (left <= n && arr[left] > arr[l])
    {
        l = left;
    }
    if (right <= n && arr[right] > arr[l])
    {
        l = right;
    }
    if (l != i)
    {
        swap(arr[l], arr[i]);
        heapify(arr, n, l);
    }
}
void heapsort(int arr[], int n)
{
    int x = n-1;
     for (int i = n / 2; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    while (x > 0)
    {
        swap(arr[x], arr[0]);
        x--;
        heapify(arr, x, 0);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = 6;
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    heapsort(arr,n);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}