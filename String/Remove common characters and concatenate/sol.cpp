#include <bits/stdc++.h>
using namespace std;
string fun(string s1, string s2)
{
    string ans = "";
    for (int i = 0; i < s1.length(); i++)
    {
        if (s2.find(s1[i]) == string::npos)
        {
            ans += s1[i];
        }
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (s1.find(s2[i]) == string::npos)
        {
            ans += s2[i];
        }
    }
    if (ans.length() == 0)
    {
        return "-1";
    }
    return ans;
}
int main()
{
    string s1 = "a";
    string s2 = "a";
    string ans = fun(s1, s2);
    cout << ans;
}