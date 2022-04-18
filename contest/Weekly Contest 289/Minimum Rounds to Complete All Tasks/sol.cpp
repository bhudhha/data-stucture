/*
You are given a 0-indexed integer array tasks, where tasks[i]
represents the difficulty level of a task. In each round, you can complete either 2 or 3
tasks of the same difficulty level.

Return the minimum rounds required to complete all the tasks, or -1 if it is not possible to complete
 all the tasks.
*/
#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> tasks)
{
    map<int, int> m;
    for (int i = 0; i < tasks.size(); i++)
    {
        m[tasks[i]]++;
    }

    int ans = 0;
    for (auto e : m)
    {
        map<int, int> m;
        for (int i = 0; i < tasks.size(); i++)
        {
            m[tasks[i]]++;
        }
        int ans = 0;
        for (auto e : m)
        {
            int val = e.second;
            if (val == 1)
            {
                return -1;
            }
            if (val % 3 == 0)
            {
                ans += val / 3;
            }
            else
            {
                ans += val / 3 + 1;
            }
        }
        return ans;
    }
    return ans;
}
int main()
{
    vector<int> tasks = {69, 65, 62, 64, 70, 68, 69, 67, 60, 65, 69, 62, 65, 65, 61, 66, 68, 61, 65, 63, 60, 66, 68, 66, 67, 65, 63, 65, 70, 69, 70, 62, 68, 70, 60, 68, 65, 61, 64, 65, 63, 62, 62, 62, 67, 62, 62, 61, 66, 69};
    int ans = fun(tasks);
    cout << ans << " ";
}