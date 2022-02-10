#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    long long int r = pow(10, 9) + 7;
    long long int sum = a % r + b % r;
    long long int ans = sum % r;
    return ans;
}