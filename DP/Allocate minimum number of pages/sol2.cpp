#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> arr, int a, int b)
{
    int s = 0;
    for (int i = a; i <= b; i++)
    {
        s += arr[i];
    }
    return s;
}
int minPages(vector<int> arr, int n, int k)
{
    if (k == 1)
    {
        return sum(arr, 0, n - 1);
    }
    if (n == 1)
    {
        return arr[0];
    }
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        res = min(res, max(minPages(arr, i, k - 1), sum(arr, i, n - 1)));
    }
    return res;
}
int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int k = 2;
    cout << minPages(arr, n, k);
}