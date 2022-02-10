#include <bits/stdc++.h>
using namespace std;
int nest(vector<int> v)
{
    vector<vector<int>> cont;
    vector<int> div;
    vector<int>::iterator it = v.end();
    for (int i = 0; i < v.size(); i++)
    {
        while (it == v.end())
        {
            div.push_back(v[i]);
            it = find(div.begin(), div.end(), v[i]);
        }
    }
}
int main()
{
    vector<int> v = {5, 4, 0, 3, 1, 6, 2};
    int ans = nest(v);
    cout << ans;
}