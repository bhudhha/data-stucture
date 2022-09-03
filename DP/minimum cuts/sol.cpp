#include <bits/stdc++.h>
using namespace std;
int minCuts(int n, int a, int b, int c)
{
    int dp[n];
    dp[0] = 0;

    for (int i = 1; i < n; i++)
    {
        dp[i] = -1;
        if (i >= a)
        {
            dp[i] = max(dp[i], dp[i - a]);
        }
        if (i >= b)
        {
            dp[i] = max(dp[i], dp[i - b]);
        }
        if (i >= c)
        {
            dp[i] = max(dp[i], dp[i - c]);
        }
        dp[i]++;
    }
    return dp[n];
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << minCuts(n, a, b, c);
}