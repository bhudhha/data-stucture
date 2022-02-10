#include <bits/stdc++.h>
using namespace std;
bool paire(int a[], int n, int sum)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += a[i];
        if (pre_sum == 0)
        {
            return true;
        }
        if (s.find(pre_sum) != s.end())
        {
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}
int main()
{
    int a[] = {-3, 4, -3, -1, 1};
    int s = 14;
    int n = sizeof(a) / sizeof(a[0]);
    cout << paire(a, n, s);
}