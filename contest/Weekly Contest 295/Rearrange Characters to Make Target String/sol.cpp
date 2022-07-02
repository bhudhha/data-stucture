#include <bits/stdc++.h>
using namespace std;
int find(string s, string target)
{
    unordered_map<char, int> t;
    unordered_map<char, int> w;
    for (char c : target)
    {
        t[c]++;
    }
    for (char c : s)
    {
        w[c]++;
    }
    for (auto e : t)
    {
        cout << e.first << " " << e.second << "";
    }
    cout << endl;
    for (auto e : w)
    {
        cout << e.first << " " << e.second << "";
    }
}
int main()
{
    string s = "ilovecodingonleetcode";
    string target = "code";
    find(s, target);
}
