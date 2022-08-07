#include <bits/stdc++.h>
using namespace std;
int table[256];
void intialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
int count(int n)
{
    int res = table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    return res;
}
vector<int> fun(vector<int> arr)
{
    intialize();
    multimap<int, int> m;
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        m.insert({(-1) * count(arr[i]), arr[i]});
    }
    for (auto e : m)
    {
        ans.push_back(e.second);
    }
    return ans;
}
int main()
{
    vector<int> arr = {5, 2, 3, 9, 4, 6, 7, 15, 32};
    vector<int> ans = fun(arr);
    for (auto e : ans)
    {
        cout << e << " ";
    }
}