#include <bits/stdc++.h>
using namespace std;
bool paire(int a[], int n, int sum)
{
    unordered_set<int> s;
    s.insert(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (s.find(sum - a[i]) != s.end())
        {
            return true;
        }
        else
        {
            s.insert(a[i]);
        }
    }
    return false;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 14;
    int n = sizeof(a) / sizeof(a[0]);
    cout << paire(a, n, s);
}