#include <bits/stdc++.h>
int kthbit(int n, int k)
{
    if ((n & (1 << k)) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    bool ans = kthbit(n, k);
    if (ans == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}