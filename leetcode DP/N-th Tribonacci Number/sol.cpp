#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (n == 2)
    {
        return 1;
    }
    return fun(n - 3) + fun(n - 2) + fun(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
}