#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fun(vector<int> nums)
{
    int s = nums.size();
    int n = pow(2, s);
    vector<vector<int>> ans;
    vector<vector<int>>::iterator it;
    for (int i = 0; i < n; i++)
    {
        vector<int> b;
        for (int j = 0; j < s; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                b.push_back(nums[j]);
            }
            it = find(ans.begin(), ans.end(), b);
            if (it == ans.end())
            {
                ans.push_back(b);
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {0};
    vector<vector<int>> ans = fun(v);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}