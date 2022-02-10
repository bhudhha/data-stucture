#include <bits/stdc++.h>
using namespace std;
vector<int> Ksort(vector<int> a, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans(a.size(), 0);
    for (int i = 0; i <= k; i++)
    {
        pq.push(a[i]);
    }
    int ind = 0;
    for (int i = k + 1; i < a.size(); i++)
    {
        ans[ind++] = pq.top();
        pq.pop();
        pq.push(a[i]);
    }
    while (!pq.empty())
    {
        ans[ind++] = pq.top();
        pq.pop();
    }
    return ans;
}
int main()
{
    vector<int> a = {9, 8, 7, 18, 29, 17};
    int k = 2;
    vector<int> ans = Ksort(a, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
