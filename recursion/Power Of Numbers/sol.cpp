#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
class solution
{
public:
    long long power(int N, int R)
    {
        if (R == 0)
            return 1;
        if (R == 1)
            return N;
        //cout<<N<<" "<<R<<endl;
        long long temp = power(N, R / 2) % mod;
        if (R % 2 == 0)
            return (temp * temp) % mod;
        return (((N * temp) % mod) * temp) % mod;
    }
};
int main()
{
    int n, r;
    cin >> n >> r;
    solution ob;
    cout << ob.power(n, r);
}