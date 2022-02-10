#include <bits/stdc++.h>
using namespace std;
int sol(int a[], int i, int j, int sum)
{
    if (j == i + 1)
    {
        return max(a[i], a[j]);
    }
    return max(sum - sol(a, i + 1, j, sum - a[i]), sum - sol(a, i, j - 1, sum - a[j]));
}
int main()
{
    int a[] = {2, 3, 15, 7};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += a[i];
    }
    cout << sol(a, 0, 3, sum);
}