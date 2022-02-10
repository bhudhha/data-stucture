#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "LeetcodeHelpsMeLearn";
    vector<int> spaces = {8, 13, 15};
    int l = 0;
    string ans;
    string str;
    for (int i = 0; i < spaces.size(); i++)
    {
        str = s.substr(l, spaces[i] - l);
        ans += str;
        ans += ' ';
        l = spaces[i];
    }
    str=s.substr(l,s.length()-l);
    ans+=str;
    cout << ans;
}