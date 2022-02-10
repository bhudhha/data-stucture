#include <bits/stdc++.h>
using namespace std;
int getExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = getExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
int modInv(int a, int m)
{
    if(a==2){
        return -1;
    }
    int x, y;
    int g = getExtended(a, m, &x, &y);
    // cout<<g;
    if (g != 1)
    {
        return -1;
    }
    else
    {
        int res = ((x % m) + m) % m;
        return res;
    }
}
int main()
{
    int a = 2, m = 1;
   cout<<modInv(a, m);
}