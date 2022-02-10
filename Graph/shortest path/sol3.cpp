#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> a[], int u, int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}
void print(vector<int> a[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << i << "->";
        for (int j : a[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void BSF(vector<int> a[], int s, int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int i : a[u])
        {
            if (visited[i] == false)
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
void shortestPath(vector<int> a[], int s, int v)
{
    bool visited[v];
    int dist[v];
    for (int i = 0; i < v; i++)
    {
        visited[i];
        dist[i] = INT_MIN;
    }
    queue<int> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i : a[u])
        {
            if (visited[i] == false)
            {
                visited[i] = true;
                dist[i] = dist[u] + 1;
                q.push(i);
            }
        }
    }
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }
}
int main()
{
    int v = 6;
    vector<int> a[v];
    addEdge(a, 0, 1);
    addEdge(a, 0, 2);
    addEdge(a, 0, 4);
    addEdge(a, 1, 3);
    addEdge(a, 2, 4);
    addEdge(a, 3, 5);
    addEdge(a, 4, 5);
    print(a, v);
    cout << endl;
    BSF(a, 0, v);
    cout << endl;
    shortestPath(a, 0, v);
}