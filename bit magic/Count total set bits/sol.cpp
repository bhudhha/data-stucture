#include <bits/stdc++.h>
using namespace std;
int powof2(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    return x - 1;
}
int countset(int n)
{
    int ans1 = 0, ans2 = 0, ans=0;
    while (n > 0)
    {
        int x = powof2(n);
        ans1 = x * (1 << (x - 1));
        ans2 = n - (1 << x) + 1;
        ans = ans + ans1 + ans2;
        n=n-(1<<x);
    }
    return ans;
}
int main()
{
    int n = 17;
    cout << countset(n);
}