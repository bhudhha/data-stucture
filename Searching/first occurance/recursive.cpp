#include <bits/stdc++.h>
using namespace std;
int fOc(int a[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (a[mid] > x)
    {
        return fOc(a, low, mid - 1, x);
    }
    else if (a[mid] < x)
    {
        return fOc(a, mid + 1, high, x);
    }
    else
    {
        if (mid == 0 || a[mid] != a[mid - 1])
        {
            return mid;
        }
        else
        {
            return fOc(a, low, mid - 1, x);
        }
    }
}
int main()
{
    int a[] = {5, 5, 10, 10, 10, 10, 20, 20, 20, 30, 30, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 10;
    cout << fOc(a, 0, n, x);
}