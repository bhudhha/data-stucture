#include <bits/stdc++.h>
using namespace std;
vector<int> fun(int a[], int n)
{
    unordered_set<int> s;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (s.find(a[i]) == s.end())
        {
            s.insert(a[i]);
            ans.push_back(a[i]);
        }
    }
    return ans;
}
int main()
{
    int n = 12;
    int a[] = {1, 10, 1, 4, 1, 2, 6, 8, 8, 5, 8, 9};
    vector<int> ans = fun(a, n);
    for (int a = 0; a < ans.size(); a++)
    {
        cout << ans[a]<<"";
    }
}