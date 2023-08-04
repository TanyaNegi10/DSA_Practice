//Find duplicate element in LL

#include <bits/stdc++.h>
using namespace std;
int findDuplicates(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];

    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main()
{
    vector<int> v = {4, 3, 2, 7, 2, 3, 1};
    cout<<findDuplicates(v);
    return 0;
}