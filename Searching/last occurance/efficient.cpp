#include <bits/stdc++.h>
using namespace std;
int lOc(int a[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] < x)
        {
            high = mid - 1;
        }
        else if (a[mid] > x)
        {
            low = mid - 1;
        }
        else
        {
            if (mid != (n - 1) || a[mid] != a[mid + 1])
            {
                return mid;
            }
            else
            {
                low=mid+1;
            }
        }
    }
    return -1;
}
int main()
{
    int a[] = {5, 5, 10, 10, 10, 10, 20, 20, 20, 30, 30, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 10;
    cout << lOc(a, n, x);
}