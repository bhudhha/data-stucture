#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {18, 43, 36, 13, 7};
    int n = nums.size();
    map<int, pair<int, int>,greater<int>> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                m[nums[i] + nums[j]] = {i, j};
            }
        }
    }
    for (auto e : m)
    {
        cout << e.first << " " << e.second.first<<" "<<e.second.second << endl;
    }
}