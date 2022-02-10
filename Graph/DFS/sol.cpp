#include <bits/stdc++.h>
using namespace std;
void DFSrec(vector<int> a[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int u : a[s])
    {
        if (visited[u] == false)
        {
            DFSrec(a, u, visited);
        }
    }
}
void DFS(vector<int> a[], int s, int v)
{
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    DFSrec(a, s, visited);
}
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
        for (auto e : a[i])
        {
            cout << e << " ";
        }
        cout << endl;
    }
}
int main()
{
    int v = 5;
    vector<int> a[v];
    addedge(a, 0, 1);
    addedge(a, 0, 2);
    addedge(a, 1, 3);
    addedge(a, 1, 2);
    addedge(a, 2, 4);
    addedge(a, 3, 4);
    dis(a, v);
    cout << endl;
    DFS(a, 0, v);
}