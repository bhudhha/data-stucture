#include <bits/stdc++.h>
using namespace std;
int water(int a[], int n)
{
    int res = 0;
    int lmax[n];
    int rmax[n];
    lmax[0] = a[0];
    rmax[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], a[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        res = res + (min(lmax[i], rmax[i]) - a[i]);
    }
    return res;
}
int main()
{
    int a[] = {3,0,0,2,0,4};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<water(a, n);
}