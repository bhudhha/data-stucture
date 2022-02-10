#include <bits/stdc++.h>
using namespace std;
vector<int> kCloset(vector<int> a, int k, int x)
{
    vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    for (int i = 0; i < a.size(); i++)
    {
        q.push({abs(a[i] - x), i});
    }
    for (int i = 0; i < k; i++)
    {
        auto p = q.top();
        ans.push_back(a[p.second]);
        q.pop();
    }
    return ans;
}
int main()
{
    vector<int> a = {12, 16, 22, 30, 35, 39, 42, 
         45, 48, 50, 53, 55, 56};
    int k = 4;
    int x = 35;
    vector<int> ans = kCloset(a, k, x);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}