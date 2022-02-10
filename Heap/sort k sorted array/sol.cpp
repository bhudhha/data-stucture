#include <bits/stdc++.h>
using namespace std;
void Ksort(vector<int> &v, int k)
{
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i <= k; i++)
    {
        q.push(v[i]);
    }
    int j = 0;
    for (int i = k + 1; i < v.size(); i++)
    {
        v[j++] = q.top();
        q.pop();
        q.push(v[i]);
    }
    while (!q.empty())
    {
        v[j++] = q.top();
        q.pop();
    }
}
int main()
{
    vector<int> v = {9, 8, 7, 18, 19, 17};
    int k = 2;
    Ksort(v, k);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}