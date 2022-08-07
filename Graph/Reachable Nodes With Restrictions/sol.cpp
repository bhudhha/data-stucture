#include <bits/stdc++.h>
using namespace std;
int reachableNodes(int n, vector<vector<int>> &edges, vector<int> &restricted)
{
    vector<vector<int>> adj(n);
    vector<bool> vis(n);
    for (auto v : edges)
    {
        adj[v[0]].push_back(v[1]);
        adj[v[1]].push_back(v[0]);
    }
    for (auto e : restricted)
    {
        vis[e] = true;
    }
    int res = 0;
    queue<int> q;
    q.push(0);
    vis[0] = true;
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        res++;
        for (int i = 0; i < adj[a].size(); i++)
        {
            if (vis[adj[a][i]] == false)
            {
                q.push(adj[a][i]);
                vis[adj[a][i]] = true;
            }
        }
    }
    return res;
}

int main()
{
    int n = 7;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {3, 1}, {4, 0}, {0, 5}, {5, 6}};
    vector<int> restricted = {4, 5};
    cout << reachableNodes(n, edges, restricted);
}