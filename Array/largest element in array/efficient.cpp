#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {};
    int res = 0;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[res])
        {
            res = i;
        }
    }
    cout << res;
}
