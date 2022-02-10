#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int ans = 0;
    int two = 1;
    while (n > 0)
    {
        int val = n % 2;
        ans = ans + two * (val == 1 ? 0 : 1);
        two = two * 2;
        n = n / 2;
    }
    cout << ans;
}
