#include <bits/stdc++.h>
using namespace std;
int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
{
    map<int, int> m;
    int val = 0;
    for (int i = 0; i < startTime.size(); i++)
    {
        if (m.find(startTime[i]) != m.end())
        {
            val = profit[i] + m[startTime[i]];
            m[endTime[i]] = val;
        }
        else
        {
            m[endTime[i]] = profit[i];
        }
    }
    int res = INT_MIN;
    for (auto e : m)
    {
        if (res < e.second)
        {
            res = e.second;
        }
    }
    return res;
}
int main()
{
    vector<int> startTime = {1, 2, 3, 4, 5, 6};
    vector<int> endTime = {3, 5, 10, 6, 9};
    vector<int> profit = {20, 20, 100, 70, 60};
    int ans = jobScheduling(startTime, endTime, profit);
    cout << ans;
}
