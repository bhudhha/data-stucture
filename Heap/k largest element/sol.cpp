#include <bits/stdc++.h>
using namespace std;
vector<int> Klargest(vector<int> v, int k)
{
    priority_queue<int> q;
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        q.push(v[i]);
    }
    for (int i = 0; i < k; i++)
    {
        ans.push_back(q.top());
        q.pop();
    }
    return ans;
}
int main()
{
    vector<int> v = {5, 15, 10, 20, 8};
    int k;
    cin >> k;
    vector<int> ans = Klargest(v, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}