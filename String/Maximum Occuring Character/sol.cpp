#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "testsample";
    map<char, int> m;
    for (int i = 0; i < a.length(); i++)
    {
        m[a[i]]++;
    }
    int val = INT_MIN;
    char ans;
    for (auto e : m)
    {
        if (val < e.second)
        {
            ans = e.first;
            val = e.second;
        }
    }
    cout<<ans;
}