#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans = {3, 4, 2, 8, 10};
    vector<int> lcs(ans.size(), 0);
    lcs[0] = 1;
    for (int i = 1; i < ans.size(); i++)
    {
        lcs[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (ans[i] > ans[j])
            {
                lcs[i] = max(lcs[i], lcs[j] + 1);
            }
        }
    }
    int res = INT_MIN;
    for (int i = 0; i < lcs.size(); i++)
    {
        res = max(res, lcs[i]);
    }
    cout << res;
}