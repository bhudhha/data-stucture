#include <bits/stdc++.h>
using namespace std;
void sets(int a[], int n)
{
    int total = 1 << n;
    int count = 0;
    for (int i = 0; i < total; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (((1 << j) & i))
            {
                sum += a[j];
            }
        }
        if (sum % 2 == 0)
        {
            count++;
        }
    }
    cout << count-1;
}
int main()
{
    int a[] = {1, 2, 3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    sets(a, n);
}