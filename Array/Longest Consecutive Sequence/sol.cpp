#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    int res = 1;
    int curr = 1;
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                curr++;
            }
            else
            {
                res = max(res, curr);
                curr = 1;
            }
        }
    }
    return res;
}
int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums);
}