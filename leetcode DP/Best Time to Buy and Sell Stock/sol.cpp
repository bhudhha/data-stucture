#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {7, 1, 3, 4, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int min = INT_MAX;
    int maxdiff = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        else if (a[i] - min > maxdiff)
        {
            maxdiff = a[i] - min;
        }
    }
    cout << maxdiff << endl;
}