#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> s, int i, int j)
{
    if (j == i + 1)
    {
        return max(s[i], s[j]);
    }
    return max(s[i] + min(sol(s, i + 2, j), sol(s, i + 1, j - 1)), s[j] + min(sol(s, i + 1, j - 1), sol(s, i, j - 2)));
}
int main()
{
    vector<int> s = {20, 5, 4, 6};
    cout << sol(s, 0, s.size() - 1);
}