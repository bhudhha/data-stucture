#include <bits/stdc++.h>
using namespace std;
void pattern(string s)
{
    int count1 = 0, count2 = 0, res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'x' && s[i - 1] == 'y')
        {
            if (count1 != count2)
            {
                res = 0;
                break;
            }
            else
            {
                count1 = 0;
                count2 = 0;
            }
        }
        if (s[i] == 'x')
        {
            count1++;
        }
        if (s[i] == 'y')
        {
            count2++;
        }
    }
    if (count1 != count2)
    {
        res = 0;
    }
    cout << res;
}
int main()
{
    string s = "xyxxy";
    pattern(s);
}