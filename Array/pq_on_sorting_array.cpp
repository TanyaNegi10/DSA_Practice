// Sorting 0's and 1's

//1st approach
#include <bits/stdc++.h>
using namespace std;
void sort01(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] == 0)
        {
            s++;
        }
        else if (arr[e] == 1)
        {
            e--;
        }
        else if (arr[s] == 1 && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
    cout << "After sorting " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    sort01(arr, n);
}

// 2nd approach

// #include <bits/stdc++.h>
// using namespace std;
// void sort01(int arr[], int n)
// {
//     int c = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             c++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i < c)
//         {
//             arr[i] = 0;
//         }
//         else{
//             arr[i]=1;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     cout << "Enter the size of array ";
//     int n;
//     cin >> n;
//     int arr[n];
//     cout << "enter the elements in array ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort01(arr, n);
// }


//3rd approach

// #include<bits/stdc++.h>
// using namespace std;
// void sort01(int arr[],int n)
// {
//     int i=0,j=0;
//     while(j<n)
//     {
//         if(arr[j]==0)
//         {
//             swap(arr[i],arr[j]);
//             i++;
//         }
//         j++;
//     }
// }
// int main()
// {
//     int arr[]={0,1,0,0,1,0,1,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sort01(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//4th approach

// #include<bits/stdc++.h>
// using namespace std;
// void sort01(int arr[],int n)
// {
//     int st=0;
//     int e=n-1;
//     while(st<e)
//     {
//         while(arr[st]==0 && st<e)
//         {
//             st++;
//         }
//         while(arr[e]==1 && st<e)
//         {
//             e--;
//         }
//         if(st<e)
//         {
//             arr[st]=0;
//             arr[e]=1;
//             st++;
//             e--;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     cout << "Enter the size of array ";
//     int n;
//     cin >> n;
//     int arr[n];
//     cout << "enter the elements in array ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort01(arr, n);
//     return 0;
// }


// Sort array in such a way that even numbers comes in left side and odd num in right side

// #include<bits/stdc++.h>
// using namespace std;
// void sort(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int e=0;
//         int j=n-1;
//        while(e<=j)
//        {
//             if(arr[e]%2==0)
//             {
//                 e++;
//             }
//             else if(arr[e]%2!=0)
//             {
//                 swap(arr[e],arr[j]);
//                 j--;

//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr,n);
// }

// Find square root of of any number using binary search

// #include <bits/stdc++.h>
// using namespace std;
// int binarysqrt(int x)
// {
//     if (x == 0 || x == 1)
//     {
//         return x;
//     }
//     int low = 0;
//     int high = x;
//     int mid, square;
//     while (low <= high)
//     {
//         mid = low + (high - low) / 2;
//         square = mid * mid;
//         if (square == x)
//         {
//             return mid;
//         }
//         else if (square > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int x;
//     cout << "Enter the number ";
//     cin >> x;
//     int sqrt = binarysqrt(x);
//     if (sqrt == -1)
//     {
//         cout << "Doesn't have a proper sqrt" << endl;
//     }
//     else
//     {
//         cout << "sqrt of " << x << " is "
//              << "  " << sqrt;
//     }
// }


