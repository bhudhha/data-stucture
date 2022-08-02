#include <bits/stdc++.h>
using namespace std;
set<string> ans;
void sub(string s, string ss, int i)
{
    if (i == s.length())
    {
        // ans.push_back(ss);
        ans.insert(ss);
        return;
    }

    sub(s, ss, i + 1);
    sub(s, ss + s[i], i + 1);
}
int appeal()
{
    int res = 0;
    for (auto e : ans)
    {
        set<char> se;
        for (int i = 0; i < e.length(); i++)
        {
            se.insert(e[i]);
        }
        res += se.size();
    }
    return res;
}
int main()
{
    string s = "abbca";
    sub(s, " ", 0);
    cout << appeal();
}