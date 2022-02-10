#include <bits/stdc++.h>
using namespace std;
long long int rev(int n)
{
    int res = 0, power = 31;
    while (n != 0)
    {
        res=(n&1)<<power;
        n=n>>1;
        power--;
    }
    return res;
}
int main()
{
    int a = 3;
    ;
    long long int r = rev(a);
    cout << r << endl;
}