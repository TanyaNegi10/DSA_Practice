// Brute force
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {3, 4, -1, 1};
    int n = nums.size();
    int ans = 1;
    int i = 0;
    while (i < n)
    {
        if (nums[i] <= 0)
        {
            i++;
        }
        int ci = nums[i] - 1;

        if (i != ci && nums[i] <= n && nums[ci]!=ci+1)
        {
            swap(nums[i], nums[ci]);
        }
        else
        {
            i++;
        }
    }

    for (int k = 0; k < n; k++)
    {
        if (nums[k] != k + 1)
        {
            ans = k + 1;
        }
    }
    cout << ans;
    return 0;
}