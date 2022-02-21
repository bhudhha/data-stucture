#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{66672, 75156}, {59890, 65654}, {92950, 95965}, {9103, 31953}, {54869, 69855}, {33272, 92693}, {52631, 65356}, {43332, 89722}, {4218, 57729}, {20993, 92876}};
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    ans.push_back(arr[0]);
    int len = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i][0] <= ans[len][0] && arr[i][1] >= ans[len][1])
        {
            ans[len][0] = min(ans[len][0], arr[i][0]);
            ans[len][1] = max(arr[i][1], ans[len][1]);
        }
        else if (arr[i][0] >= ans[len][0] && arr[i][1] <= ans[len][1])
        {
            ans[len][0] = min(ans[len][0], arr[i][0]);
            ans[len][1] = max(arr[i][1], ans[len][1]);
        }
        else
        {
            ans.push_back(arr[i]);
            len++;
        }
    }
    cout << (len + 1);
}