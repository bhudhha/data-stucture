#include <bits/stdc++.h>
using namespace std;
int main()
{
    string key = "eljuxhpwnyrdgtqkviszcfmabo", message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
    string val = "abcdefghijklmnopqrstuvwxyz";
    map<char, char> m;
    int i = 0, j = 0;
    while (i < key.size())
    {
        if (key[i] != ' ' && m.find(key[i]) == m.end())
        {
            m[key[i]] = val[j % 26];
            j++;
        }
        i++;
    }
    string ans;
    for (int k = 0; k < message.size(); k++)
    {
        if (message[k] == ' ')
        {
            ans += ' ';
        }
        else
        {
            ans += m[message[k]];
        }
    }
    cout << ans;
}