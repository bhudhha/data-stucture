#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = arr.size();
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
    for (int i = 0; i < k; i++)
    {
        q.push({arr[i][0], {i, 0}});
    }
    vector<int> ans;
    while (!q.empty())
    {
        auto e = q.top();
        q.pop();
        int val = e.first;
        auto next = e.second;
        int i = next.first;
        int j = next.second;
        ans.push_back(val);
        if (i < k && j+1 < k)
        {
            q.push({arr[i][j + 1], {i, j + 1}});
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}