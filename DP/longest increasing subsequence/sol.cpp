#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> val, int x)
{
    int s = 0, e = val.size() - 1;
    while (s < e)
    {
        int m = s + (e - s) / 2;
        if (val[m] >= x)
        {
            e = m;
        }
        else
        {
            s = m + 1;
        }
    }
    return e;
}
int main()
{
    vector<int> ans = {3, 4, 2, 8, 10};
    vector<int> val;
    val.push_back(ans[0]);
    for (int i = 0; i < ans.size(); i++)
    {
        if (val.back() < ans[i])
        {
            val.push_back(ans[i]);
        }
        else
        {
            int c = fun(val, ans[i]);
            val[c] = ans[i];
        }
    }
    for (int i = 0; i < val.size(); i++)
    {
        cout << val[i] << " ";
    }
}