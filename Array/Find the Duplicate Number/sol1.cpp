#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> nums)
{
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[abs(nums[i])] < 0)
        {
            ans = abs(nums[i]);
            break;
        }
        else
        {
            nums[abs(nums[i])] = -nums[abs(nums[i])];
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << fun(nums);
}