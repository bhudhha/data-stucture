#include <bits/stdc++.h>
using namespace std;
vector<int> next(vector<int> &nums)
{
    int k = -1;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            k = i;
        }
    }
    if (k == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    int l = -1;
    for (int i = k + 1; i < n; i++)
    {
        if (nums[k] < nums[i])
        {
            l = i;
        }
    }
    swap(nums[k], nums[l]);
    reverse(nums.begin() + k + 1, nums.end());
    return;
}
int main()
{
    vector<int> ans = {1, 2, 3};
    vector<vector<int>> result;
    sort(ans.begin(), ans.end());
    do
    {
        result.push_back(ans);
    } while (next(ans))
}