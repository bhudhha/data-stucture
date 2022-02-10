#include <bits/stdc++.h>
using namespace std;
void neighbour(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            cout << a[i + 1] << " ";
        }
        else
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[] = {1, 2, 2, 3, 3, 3, 2, 1, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    neighbour(a, n);
}