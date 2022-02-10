#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    int ans = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int res1 = 0, res2 = 0;
        for (int j = i; j >= 0; j--)
        {
            res1 += arr[j];
        }
        for (int k = i + 1; k < arr.size(); k++)
        {
            res2 += arr[k];
        }
        res1 = min(res2, res1);
        ans = min(ans, res1);
    }
    cout << ans;
}