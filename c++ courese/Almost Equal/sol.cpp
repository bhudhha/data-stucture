#include <bits/stdc++.h>
using namespace std;
int fi(string s1, string s2)
{
    int m1[26] = {0};
    int m2[26] = {0};
    int count = 0, len1 = 0, len2 = 0;
    len1 = s1.length();
    len2 = s2.length();
    for (int i = 0; i < len1; i++)
    {
        m1[s1[i] - 'a']++;
    }
    for (int i = 0; i < len2; i++)
    {
        m2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (m1[i] != m2[i])
        {
            count = count + abs(m1[i] - m2[i]);
        }
    }
    return count;
}
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "geeksforgeekscoursesgeeks";
   cout<<fi(s1, s2);
}