#include <bits/stdc++.h>
using namespace std;
int min_arr(vector<int> &v, int k)
{
    int n = v.size();
    priority_queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(v[i]);
    }
    for (int i = 0; i < k; i++)
    {
        int lar = q.top();
        q.pop();
        float s = float(lar) / float(2);
        q.push(ceil(s));
    }
    int sum = 0;
    while (!q.empty())
    {
        sum += q.top();
        q.pop();
    }
    return sum;
}
int main()
{
    vector<int> v = {4, 3, 6, 7};
    int k = 3;
    int ans = min_arr(v, k);
    cout << ans << endl;
}