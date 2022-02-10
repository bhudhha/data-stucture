#include <bits/stdc++.h>
using namespace std;
int trip(int n)
{
    int count = 0;
    for (int c = 1; c <= n; c++)
    {
        for (int b = c; b <= n; b += c)
        {
            for (int a = c; a <= n; a ++)
            {
                if (a % b == c)
                {
                    if (b % c == 0)
                    {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = trip(n);
        cout << ans << endl;
    }
}