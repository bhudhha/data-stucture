#include <bits/stdc++.h>
using namespace std;
vector<int> query(vector<vector<int>> q, vector<int> val)
{
    vector<int> ans;
    for (int i = 0; i < q.size(); i++)
    {
        if (q[i][0] == 1 && q[i][1] == 0 && q[i][2] == 0)
        {
            reverse(val.begin(), val.end());
        }
        else if (q[i][0] == 2)
        {
            swap(val[q[i][1]], val[q[i][2]]);
        }
        else
        {
            ans.push_back(val[q[i][1]]);
        }
    }
    return ans;
}
int main()
{
    vector<int> val = {1, 2, 3};
    vector<vector<int>> q = {{2, 1, 2}, {1,0,0}, {3, 2, 0}};
    vector<int> ans = query(q, val);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}