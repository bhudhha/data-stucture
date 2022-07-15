#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 8, -4, -4, 9, -2, 2};
    int sum = 0;
    unordered_map<int, int> m;
    int res = 0, pre_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        pre_sum += arr[i];
        if (pre_sum == sum)
        {
            res = i + 1;
        }
        if (m.find(pre_sum) == m.end())
        {
            m.insert({pre_sum, i});
        }
        if (m.find(pre_sum - sum) != m.end())
        {
            res = max(res, i - m[pre_sum - sum]);
        }
        cout << i << " " << pre_sum << " " << res << endl;
    }
    cout << res;
}