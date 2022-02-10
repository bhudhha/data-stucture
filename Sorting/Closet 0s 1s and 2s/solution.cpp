#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}
int main()
{
    int a[] = {0, 2, 1, 2, 1, 1, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    sort012(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}