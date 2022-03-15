#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int sum = 30;
    int n = arr.size();

    int dp[n + 1][sum + 1];
    for (int i = 0; i < sum + 1; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (j < arr[i - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            }
        }
    }
    cout << dp[n][sum];
}