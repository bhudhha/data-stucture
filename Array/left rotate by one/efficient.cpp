#include <bits/stdc++.h>
using namespace std;
int leftOne(int a[], int n)
{
    int first = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = first;
    return 0;
}
int main()
{
    int a[] = {1,2,3};
    int n = sizeof(a) / sizeof(a[0]);
    leftOne(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}