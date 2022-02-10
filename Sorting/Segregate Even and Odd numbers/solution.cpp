#include <bits/stdc++.h>
using namespace std;
void segevenodd(int a[], int n)
{
    int i = -1, j = n;
    while (true)
    {
        do
        {
            i++;
        } while (a[i] % 2 == 0);
        do
        {
            j--;
        } while (a[j] % 2 != 0);
        if (i >= j)
        {
            return;
        }
        swap(a[i], a[j]);
    }
}
int main()
{
    int a[] = {12, 34, 45, 9, 8, 90, 3};
    int n = sizeof(a) / sizeof(a[0]);
    segevenodd(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}