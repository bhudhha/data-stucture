#include <bits/stdc++.h>
using namespace std;
int diff(int a[], int n)
{
    int res = a[1] - a[0], minVal = a[0];
    for (int i = 1; i < n; i++)
    {
        res=max(res,a[i+1]-minVal);
        minVal=min(minVal,a[i]);
    }
    return res;
}
int main()
{
    int a[] = {2,8,10,6,4,8,1};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<diff(a, n);
}