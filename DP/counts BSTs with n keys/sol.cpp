#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2;
    vector<int> v(n + 1, 0);
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int ans = 0;
        for (int j = 1; j <= n; j++)
        {
            int l = j - 1;
            int r = i - j;
            ans += v[l] * v[r];
        }
        v[i] = ans;
    }
    cout << v[n];
}