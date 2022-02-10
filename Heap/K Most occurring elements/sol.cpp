#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {3, 1, 4, 4, 5, 2, 6, 1};
    int k=2;
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    priority_queue<int> p;
    for (auto e : mp)
    {
        p.push(e.second);
    }
    int ans = 0;
    while (k--)
    {
        ans += p.top();
        p.pop();
    }
}