#include <bits/stdc++.h>
using namespace std;
void addedge(vector<int> a[], int u, int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}
void dis(vector<int> a[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << i << "->";
        for (int e : a[i])
        {
            cout << e << " ";
        }
        cout << endl;
    }
}
void BFS(vector<int> a[], int s, bool visited[])
{
    queue<int> q;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : a[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
int BFSdis(vector<int> a[], int v)
{
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    int count = 0;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            count++;
            BFS(a, i, visited);
        }
    }
    return count;
}
int main()
{
    int v = 7;
    vector<int> a[v];
    addedge(a, 0, 1);
    addedge(a, 0, 2);
    addedge(a, 2, 3);
    addedge(a, 1, 3);
    addedge(a, 4, 5);
    addedge(a, 4, 6);
    addedge(a, 5, 6);
    dis(a, v);
    cout << endl;
    int ans = BFSdis(a, v);
    cout << endl;
    cout << ans;
}