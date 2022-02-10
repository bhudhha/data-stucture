#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> res(n + 1);
    res[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        res[i] = (i % 2 == 1 ? 1 : 0) + res[i / 2];
    }
    for (int i = 0; i <= n; i++)
    {
        cout << res[i] << " ";
    }
}