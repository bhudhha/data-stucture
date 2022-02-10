#include <bits/stdc++.h>
using namespace std;
vector<int> pivotArray(vector<int> &nums, int pivot)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == pivot)
        {
            swap(nums[i], nums[n - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    int i = -1;
    for (int j = 0; j < n - 1; j++)
    {
        if (nums[i] <= pivot)
        {
            i++;
            cout << nums[i] << " ";
            cout << nums[j] << " ";
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[n - 1], nums[i + 1]);
    return nums;
}
int main()
{
    vector<int> nums = {-3, 4, 2, 3};
    int pivot = 2;
    pivotArray(nums, pivot);
}