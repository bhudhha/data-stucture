#include <bits/stdc++.h>
using namespace std;
int setit(int n)
{
    return log2(n & -n) + 1;
}
int main()
{
    int n = 12;
    cout << setit(n);
}