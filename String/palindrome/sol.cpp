#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ab";
    int start = 0;
    bool flag = true;
    int last = s.length() - 1;
    while (start < last)
    {
        if (s[start] != s[last])
        {
            flag = false;
            break;
        }
        last--;
        start++;
    }
    cout << flag;
}