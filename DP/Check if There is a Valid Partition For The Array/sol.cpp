#include <bits/stdc++.h>
using namespace std;
bool validPartition(vector<int> &nums)
{
    vector<int> dp(nums.size() + 1, 0);
    dp[nums.size()] = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (i + 1 < nums.size() and nums[i] == nums[i + 1])
            dp[i] = max(dp[i], dp[i + 2]);
        if (i + 2 < nums.size())
        {
            if (nums[i] == nums[i + 1] and nums[i + 1] == nums[i + 2])
                dp[i] = max(dp[i], dp[i + 3]);
            else if (abs(nums[i] - nums[i + 1]) == 1 and abs(nums[i + 1] - nums[i + 2]) == 1)
                dp[i] = max(dp[i], dp[i + 3]);
        }
    }

    return dp[0];
}
int main()
{
    vector<int> nums = {4, 4, 4, 5, 6};
    cout << validPartition(nums);
}