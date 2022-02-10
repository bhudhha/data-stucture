#include <bits/stdc++.h>
using namespace std;
string fun(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();
    int dp[n+1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m ;j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return "Rahul";
}
int main()
{
    string s1 = "geek";
    string s2 = "eke";
    cout << fun(s1, s2);
}