#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> nums)
{
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }
    int res = 0;

    for (auto e : s)
    {
        if (s.find(e - 1) == s.end())  //this is new starting--> NO previos element present in there
        {
            int num = e;
            int curr = 1;
            while (s.find(num + 1) != s.end()) //count untill there is no consecutive element
            {
                num++;
                curr++;
            }
            res = max(res, curr);// longest consecutive 
        }
    }
    return res;
}
int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums);
}