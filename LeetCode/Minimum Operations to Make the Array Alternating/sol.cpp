#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> even;
        int even_max_freq = 0, even_max_element = 0, even_sec_max_freq = 0, even_sec_max_element = 0;
        // Largest and SecondLargest Frequency element at even index
        for (int i = 0; i < n; i = i + 2)
        {
            even[nums[i]]++;
            if (even[nums[i]] > even_max_freq)
            {
                even_max_element = nums[i];
                even_max_freq = even[nums[i]];
            }
            else if (even[nums[i]] <= even_max_freq && nums[i] != even_max_element && even_sec_max_freq < even[nums[i]])
            {
                even_sec_max_element = nums[i];
                even_sec_max_freq = even[nums[i]];
            }
        }
        unordered_map<int, int> odd;
        int odd_max_freq = 0, odd_max_element = 0, odd_sec_max_freq = 0, odd_sec_max_element = 0;
        // Largest and SecondLargest Frequency element at odd index
        for (int i = 1; i < n; i = i + 2)
        {
            odd[nums[i]]++;
            if (odd[nums[i]] > odd_max_freq)
            {
                odd_max_element = nums[i];
                odd_max_freq = odd[nums[i]];
            }
            else if (odd[nums[i]] <= odd_max_freq && nums[i] != odd_max_element && odd_sec_max_freq < odd[nums[i]])
            {
                odd_sec_max_element = nums[i];
                odd_sec_max_freq = odd[nums[i]];
            }
        }
        if (even_max_element != odd_max_element)
        {
            return n - even_max_freq - odd_max_freq;
        }
        else
        {
            return min(n - odd_max_freq - even_sec_max_freq, n - even_max_freq - odd_sec_max_freq);
        }
        return 0;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {69, 91, 47, 74, 75, 94, 22, 100, 43, 50, 82, 47, 40, 51, 90, 27, 98, 85, 47, 14, 55, 82, 52, 9, 65, 90, 86, 45, 52, 52, 95, 40, 85, 3, 46, 77, 16, 59, 32, 22, 41, 87, 89, 78, 59, 78, 34, 26, 71, 9, 82, 68, 80, 74, 100, 6, 10, 53, 84, 80, 7, 87, 3, 82, 26, 26, 14, 37, 26, 58, 96, 73, 41, 2, 79, 43, 56, 74, 30, 71, 6, 100, 72, 93, 83, 40, 28, 79, 24};
    cout << s.minimumOperations(nums);
}