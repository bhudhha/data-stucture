/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.



Example 1:

Input: nums = [1,3,4,2,2]
Output: 2*/
#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> nums)
{
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        if (s.find(nums[i]) != s.end())
        {
            return nums[i];
        }
        else
        {
            s.insert(nums[i]);
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << fun(nums);
}