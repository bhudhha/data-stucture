#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    int count[256] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "listen";
    string s2 = "silent";
    cout << isAnagram(s1, s2);
}