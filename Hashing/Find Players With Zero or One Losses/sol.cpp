#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findWinners(vector<vector<int>> &matches)
{
    map<int, int> win;
    map<int, int> loss;
    vector<vector<int>> ans;
    vector<int> w;
    vector<int> l;
    for (int i = 0; i < matches.size(); i++)
    {
        win[matches[i][0]]++;
        loss[matches[i][1]]++;
    }
    for (auto e : win)
    {
        if (loss.find(e.first) == loss.end())
        {
            w.push_back(e.first);
        }
    }
    for (auto e : loss)
    {
        if (e.second <= 1)
        {
            l.push_back(e.first);
        }
    }
    ans.push_back(w);
    ans.push_back(l);
    return ans;
}
int main()
{
    vector<vector<int>> matches = {{1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};
    vector<vector<int>> ans = findWinners(matches);
    cout << "[";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
            if (j != ans[i].size() - 1)
            {
                cout << ",";
            }
        }
        cout << "]";
          if (i != ans.size() - 1)
            {
                cout << ",";
            }
    }
    cout << "]";
}