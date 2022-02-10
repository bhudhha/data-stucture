#include <bits/stdc++.h>
using namespace std;
int diff(int a[], int n)
{
    int res = abs(a[n - 1] - a[0]);
    for (int i = 0; i < n; i++)
    {
        res=min(res,abs(a[i+1]-a[i]));
    }
    return res;
}
int main()
{
    int a[] ={10,-3,-4,7,6,5,-4,-1};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<diff(a, n);
}