#include <bits/stdc++.h>
using namespace std;
void per(string ans, int i, unordered_set<string>& uset)
{
    if (i == ans.length() - 1)
    {
        uset.insert(ans);
    }
    for (int j = i; j < ans.length(); j++)
    {
        swap(ans[i], ans[j]);
        per(ans, i + 1, uset);
        swap(ans[i], ans[j]);
    }
}
void permute(string ans)
{
    unordered_set<string> uset;
    per(ans, 0, uset);
    cout<<uset.size()<<" ";
    for (auto e : uset)
    {
        cout << e << " ";
    }
}
int main()
{
    string ans = "ACBC";
    permute(ans);
}