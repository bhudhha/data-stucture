#include <bits/stdc++.h>
using namespace std;
int minJumps(vector<int> &arr)
{
    unordered_map<int, vector<int>> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]].push_back(i);
    }
    for (auto e : mp)
    {
        cout << e.first << "->";
        for (int i = 0; i < e.second.size(); i++)
        {
            cout << e.second[i] << " ";
        }
        cout << endl;
    }

    cout << endl;
    queue<int> q;
    q.push(0);

    vector<int> dis(arr.size(), 1e9);
    cout << "q" << 0 << endl;
    dis[0] = 0;

    while (!q.empty())
    {

        int index = q.front();
        q.pop();

        if (index == arr.size() - 1)
            return dis[index];

        vector<int> &list = mp[arr[index]];
        list.push_back(index - 1);
        list.push_back(index + 1);

        for (auto &x : list)
        {

            if (x >= 0 and x < arr.size() and dis[x] > dis[index] + 1)
            {
                dis[x] = dis[index] + 1;
                q.push(x);
                cout << "q" << x << " ";
            }
        }
        cout << endl;
        list.clear();
    }

    return -1;
}
int main()
{
    vector<int> arr = {100, -23, -23, 404, 100, 23, 23, 23, 3, 404};
    int ans = minJumps(arr);
    cout << endl
         << endl;
    cout << ans;
}