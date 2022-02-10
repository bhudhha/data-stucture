#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
            }
        }
        cout << sum << endl;
    }
}