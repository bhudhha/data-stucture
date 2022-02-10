#include <bits/stdc++.h>
using namespace std;
int nextgap(int gap)
{
    if (gap <= 1)
    {
        return 0;
    }
    return gap / 2 + gap % 2;
}
void sortAbs(int a[], int b[], int n, int m)
{
    int gap = n + m, i, j;
    for (gap = nextgap(gap); gap > 0; gap = nextgap(gap))
    {
        for (i = 0; i + gap < n; i++)
        {
            if (a[i] > a[i + gap])
            {
                swap(a[i], a[i + gap]);
            }
        }
        for (j = gap > n ? n - gap : 0; i < n && j < m; i++, j++)
        {
            if (a[i] > b[j])
            {
                swap(a[i], b[j]);
            }
        }
        if (j < m)
        {
            for (j = 0; j + gap < m; j++)
            {
                if (b[j] > b[j + gap])
                {
                    swap(b[j], b[j + gap]);
                }
            }
        }
    }
}
int main()
{
    int a[] = {10, 27, 38, 43, 82};
    int b[] = {3, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    sortAbs(a, b, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
}