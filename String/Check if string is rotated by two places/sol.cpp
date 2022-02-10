#include <bits/stdc++.h>
using namespace std;
bool fun(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    if (a.length() <= 2 || b.length() <= 2)
    {
        return (a == b);
    }
    string ans1 = "";
    ans1 = ans1 + a.substr(2, a.length() - 2) + a.substr(0, 2);
    string ans2 = "";
    ans2 = ans2 + a.substr(0, a.length() - 2) + a.substr(a.length() - 2, 2);
    return (ans1.compare(b) == 0 || ans2.compare(b)==0);
}
int main()
{
    string a = "geeksforgeeks";
    string b = "geeksgeeksfor";
    cout << fun(a, b);
}