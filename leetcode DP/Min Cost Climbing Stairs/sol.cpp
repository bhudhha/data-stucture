#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> v, int n)
{
    int dp[n];
    if (n == 1)
    {
        return v[0];
    }
    dp[0] = v[0];
    dp[1] = v[1];
    for (int i = 2; i < n; i++)
    {
        dp[i] = v[i] + min(dp[i - 1], dp[i - 2]);
    }
    return min(dp[n - 1], dp[n - 2]);
}
int main()
{
    vector<int> v = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << sol(v, v.size());
}