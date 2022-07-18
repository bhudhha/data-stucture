#include <bits/stdc++.h>
using namespace std;

int digitSum(long n)
{
    long sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int maximumSum(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int temp = digitSum(nums[i]);
        if (mp.find(temp) != mp.end())
        {
            ans = max(ans, mp[temp] + nums[i]);
        }
        mp[temp] = max(nums[i], mp[temp]);
    }
    return ans;
}
int main()
{

    vector<int> nums = {279, 169, 463, 252, 94, 455, 423, 315, 288, 64, 494, 337, 409, 283, 283, 477, 248, 8, 89, 166, 188, 186, 128};
    cout << maximumSum(nums);
}