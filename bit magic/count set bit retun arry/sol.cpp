#include <bits/stdc++.h>
using namespace std;
vector<int> rev(int n)
{
    vector<int> v = {0, 1, 1, 2, 1, 2, 2, 3};
    if (n < 8)
    {
        v.erase(v.begin() + n + 1, v.end());
        return v;
    }
    else if(n%8==0)
    {
        int rep = n / 8;
        for (int i = 1; i <= rep; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                int ans = v[i] + i;
                v.push_back(ans);
            }
        }
    }
    return v;
}
int main()
{
    int n = 8;
    vector<int> ans = rev(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}