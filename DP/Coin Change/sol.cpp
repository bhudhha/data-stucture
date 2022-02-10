#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> coins = {3, 4, 1};
    int val = 5;
    vector<int> dp(val + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 0; i <= val; i++)
    {
        for (int j = 0; j < coins.size(); j++)
        {
            if (coins[j] <= i)
            {
                int sub = dp[i - coins[j]];
                if (sub != INT_MAX)
                {
                    dp[i] = min(dp[i], sub + 1);
                }
            }
        }
    }
    for (int i = 0; i <= val; i++)
    {
        cout << dp[i] << " ";
    }
}