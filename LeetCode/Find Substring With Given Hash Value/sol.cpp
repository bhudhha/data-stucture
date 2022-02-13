
#include <bits/stdc++.h>
using namespace std;
void fun(vector<int> arr)
{
    int n = arr.size();
    vector<int> left(n + 1, 0);
    vector<int> right(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (arr[i - 1] == 0)
        {
            left[i] = left[i - 1] + 1;
        }
        else
        {
            left[i] = left[i - 1];
        }
    }
    for (int i = n; i >= 0; i--)
    {
        if (arr[i - 1] == 1)
        {
            right[i - 1] = right[i] + 1;
        }
        else
        {
            right[i - 1] = right[i];
        }
    }
    map<int, vector<int>> mp;
    for (int i = 0; i <= n; i++)
    {
        mp[left[i] + right[i]].push_back(i);
    }
    vector<int> ans;
    for (auto e : mp)
    {
        ans = e.second;
    }
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}
int main()
{
    vector<int> arr = {1,1};
    fun(arr);
}