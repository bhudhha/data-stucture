#include <bits/stdc++.h>
using namespace std;
string maxValue(string n, int x)
{
    int len = n.size() - 1;
    int ans = len + 1;
    if (n[0] == '-')
    {
        for (int i = len; i >= 1; --i)
        {
            if (n[i] - '0' > x)
                ans = i;
        }
    }
    else
    {
        for (int i = len; i >= 0; --i)
        {
            if (n[i] - '0' < x)
                ans = i;
        }
    }
    n.insert(n.begin() + ans, x + '0');
    return n;
}
int main()
{
    string N = "-13";
    int k = 2;
    cout << maxValue(N, k);
}