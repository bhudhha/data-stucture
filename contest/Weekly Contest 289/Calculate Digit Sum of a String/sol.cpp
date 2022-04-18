/*
You are given a string s consisting of digits and an integer k.

A round can be completed if the length of s is greater than k. In one round, do the following:

Divide s into consecutive groups of size k such that the first k characters are in the first group, the next k characters are in the second group, and so on. Note that the size of the last group can be smaller than k.
Replace each group of s with a string representing the sum of all its digits. For example, "346" is replaced with "13" because 3 + 4 + 6 = 13.
Merge consecutive groups together to form a new string. If the length of the string is greater than k, repeat from step 1.
Return s after all rounds have been completed.
*/
#include <bits/stdc++.h>
using namespace std;
string fun(string s, int k)
{
    while (s.length() > k)
    {
        int sum = 0;
        string s1;
        for (int i = 0; i < s.length(); i++)
        {
            if (i != 0 && i % k == 0)
            {
                s1 += to_string(sum);
                sum = 0;
            }
            sum += s[i] - '0';
        }
        s1 += to_string(sum);
        swap(s1, s);
    }
    return s;
}
int main()
{
    string s = "11111222223";
    int k = 3;
    string ans = fun(s, k);
    cout << ans << " ";
}