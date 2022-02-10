#include <bits/stdc++.h>
using namespace std;
bool givensum(int a[], int n, int g)
{
    int s = 0, curr_sum = a[0];
    for (int e = 1; e < n; e++)
    {
        while (g < curr_sum && s < e - 1)
        {
            curr_sum -= a[s];
            s++;
        }

        if (curr_sum == g)
        {
            return true;
        }
        if (e < n)
        {
            curr_sum += a[e];
        }
    }
    return (curr_sum == g);
}
int main()
{
    int a[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int given = 33;
    cout << "ans " << givensum(a, n, given);
}