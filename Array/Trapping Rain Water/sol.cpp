#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> num)
{
    int n = num.size();
    int lmax[n], rmax[n];
    lmax[0] = num[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], num[i]);
    }
    rmax[n - 1] = num[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(num[i], rmax[i + 1]);
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += min(lmax[i], rmax[i]) - num[i];
    }
    return res;
}
int main()
{
    vector<int> num = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << fun(num);
}