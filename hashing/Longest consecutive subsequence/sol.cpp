#include <bits/stdc++.h>
using namespace std;
int squence(int a[], int n)
{
    unordered_set<int> v(a, a + n);
    int res = 1;
    for (auto x : v)
    {
        if (v.find(x - 1) == v.end())
        {
            int cur = 1;
            while (v.find(x + cur) != v.end())
            {
                cur++;
                res = max(res, cur);
            }
        }
    }
    return res;
}
int main()
{
    int a[] = {1,4,20,3,10,5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << squence(a, n);
}