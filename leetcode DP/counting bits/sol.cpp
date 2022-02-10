#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    int count;
    for (int j = 0; j <= n; j++)
    {
        int i=j;
        count = 0;

        while (i > 0)
        {
            if (i & 1 == 1)
            {
                count++;
            }
            i = i >> 1;
        }
        ans.push_back(count);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}