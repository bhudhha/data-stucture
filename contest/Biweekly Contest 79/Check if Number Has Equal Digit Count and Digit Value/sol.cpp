#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "6210001000";
    vector<int> a(9, 0);
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - '0']++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (a[i] != (s[i] - '0'))
        {
            cout << "NO";
        }
    }
    cout << "YES";
}