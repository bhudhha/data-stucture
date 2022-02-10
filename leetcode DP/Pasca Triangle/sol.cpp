#include <bits/stdc++.h>
using namespace std;
vector<int> fun(int n)
{
    vector<vector<int>> ans;
    for (int line = 1; line <= n; line++)
    {
        int C = 1;
        vector<int> val;
        for (int i = 1; i <= line; i++)
        {
            val.push_back(C);
            C = C * (line - i) / i;
        }
        ans.push_back(val);
    }
    return ans[n];
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans = fun(n);

    for (int j = 0; j < ans.size(); j++)
    {
        cout << ans[j] << " ";
    }
}