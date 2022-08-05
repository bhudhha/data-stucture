#include <bits/stdc++.h>
using namespace std;
int combinations4(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<int> dp(target + 1);
    dp[0] = 1;
    int currTarget = 1;
    for (int currTarget = 1; currTarget <= target; currTarget++)
    {
        for (auto num : nums)
        {
            if (num <= currTarget)
            {
                dp[currTarget] += dp[currTarget - num];
            }
            else
            {
                break;
            }
        }
    }
    return dp[target];
}
int main()
{
    vector<int> nums = {1, 2, 3};
    int target = 4;
    cout << combinations4(nums, target);
}