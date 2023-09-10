// Union of two sorted array
// Ex--    arr1[]={2,5,7,8,8,9}
//         arr2[]={3,4,7,8,9,10}
//         ans={2,3,4,5,7,8,9,10}

// Brute force approach
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int arr1[] = {2, 5, 7, 8, 8, 9};
//     // int arr2[] = {3, 4, 7, 8, 9, 10};

//     int arr1[]={1,2,2,3,3,4,4,5,5,6,7};
//     int arr2[]={2,3,3,5,6,6,7,8};

//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);

//     set<int> s;
//     for(int i=0;i<n1;i++)
//     {
//         s.insert(arr1[i]);              //n1logn
//     }
//     for(int j=0;j<n2;j++)
//     {
//         s.insert(arr2[j]);              //n2logn
//     }
//     int uni[s.size()];
//     int i=0;
//     set<int>::iterator it;
//     for(it=s.begin();it!=s.end();it++)               //(n1+n2)
//     {
//         uni[i]=(*it);
//         i++;
//     }
//     for (int ele : uni)
//     {
//         cout << ele << " ";
//     }
//     return 0;
// }
//TC=n1logn+n2logn+(n1+n2)

//Optimal Approach

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {2, 5, 7, 8, 8, 9};
    int arr2[] = {3, 4, 7, 8, 9, 10};

    // int arr1[]={1,2,2,3,3,4,4,5,5,6,7};
    // int arr2[]={2,3,3,5,6,6,7,8};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            if(ans.size()==0 || ans.back()!=arr1[i])
            {
                ans.push_back(arr1[i]);
            }
            i++;
        }else{
            if(ans.size()==0 || ans.back()!=arr2[j])
            {
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1)
    {
        if(ans.size()==0 || ans.back()!=arr1[i])
        {
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n2)
    {
        if(ans.size()==0 || ans.back()!=arr2[j])
        {
            ans.push_back(arr2[j]);
        }
        j++;
    }

    for(int ele:ans)
    {
        cout<<ele<<" ";
    }
    return 0;
}

//TC=O(n1+n2)       SC=O(n1+n2)
