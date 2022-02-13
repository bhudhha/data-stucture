#include <bits/stdc++.h>
using namespace std;
int main()
{
    string rings = "B0B6G0R6R0R6G9";
    unordered_map<int, unordered_set<char>> mp;
    vector<int> val(10, 0);
    for (int i = 1; i < rings.size(); i += 2)
    {
        if (mp[rings[i] - '0'].size() == 3)
        {
            val[rings[i] - '0'] = 1;
        }
        mp[rings[i] - '0'].insert(rings[i - 1]);
    }
    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << val[i] << " ";
        res+=val[i];
    }
    cout << res << endl;
    for (auto e : mp)
    {
        cout << e.first << " ";
        for (auto s : e.second)
        {
            cout << s << " ";
        }
        cout << endl;
    }
}