#include <bits/stdc++.h>
using namespace std;
int bitdiff(int a, int b)
{
    int res = 1;
    int abit = 0, bbit = 0;
    while (a > 0 && b > 0)
    {
        abit = 1 & a;
        bbit = 1 & b;
        if (abit != bbit)
        {
            break;
        }
        res++;
        a = a / 2;
        b = b / 2;
    }
    if (abit == bbit)
    {
        while (a > 0)
        {
            int r = (1 & a);
            if (r == 0)
            {
                res++;
            }
            a = a / 2;
        }
        while (b > 0)
        {
            int x = (1 & b);
            if (x == 0)
            {
                res++;
            }
            b = b / 2;
        }
    }
    return res;
}
int main()
{
    int a = 52, b = 20;
    cout << bitdiff(a, b);
}