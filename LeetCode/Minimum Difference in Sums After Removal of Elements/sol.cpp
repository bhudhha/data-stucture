#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> arr)
{
    int m = arr.size();
    int n = m / 3;
    int j = m / 2;
    sort(arr.begin(), arr.begin() + j);
    sort(arr.begin() + j, arr.end());
    int left = 0, right = 0;
    if (n % 2 != 0)
    {
        left = n / 2 + 1;
        right = n - left;
    }
    else
    {
        left = right = n / 2;
    }

    int lsum = 0;
    int rsum = 0;
    for (int i = 0; i < j - left; i++)
    {
        lsum += arr[i];
    }
    for (int i = j + 1 + right; i < m; i++)
    {
        rsum += arr[i];
    }
    int res = lsum - rsum;
    return res;
}
int main()
{
    vector<int> arr = {7, 9, 5, 8, 1, 3, 12, 32, 55};
    int ans = fun(arr);
    cout << ans;
}