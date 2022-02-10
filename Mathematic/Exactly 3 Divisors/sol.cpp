#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 && n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
int div(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            int r = i * i;
            count++;
            if (r > n)
            {
                return count-1;
                break;
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << div(n);
}