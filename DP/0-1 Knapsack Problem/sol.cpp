#include <bits/stdc++.h>
using namespace std;
int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (W < wt[n - 1])
    {
        return knapSack(W, wt, val, n - 1);
    }
    else
    {
        return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
    }
}
int main()
{
    int val[] = {1, 4, 3, 7};
    int wt[] = {1, 2, 1, 5};
    int W = 7;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
}