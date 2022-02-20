#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aaaaaaa";
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    int l = 6;
    int n = s.length();
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (s[i] == s[i - 1] && count > l)
        {
            int v = i + 1;
            while (s[i] == s[v] && v < n)
            {
                v++;
            }
            if (v < n)
            {
                swap(s[i], s[v]);
            }

            count = 1;
        }
    }
    int full = 0;
    int i;
    for (i = n - 1; i >= 1; i--)
    {
        if (s[i] == s[i - 1])
        {
            full++;
        }
        else
        {
            break;
        }
    }
    cout << i << endl;
    if (full < l)
    {
        cout << s << endl;
    }
    string ans = s.substr(0, 0 + i + l);
    cout << s << " " << ans;
}