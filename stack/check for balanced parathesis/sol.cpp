#include <bits/stdc++.h>
using namespace std;
bool match(char a, char b)
{
    if ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'))
    {
        return true;
    }
    return false;
}
bool bal(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else if (match(st.top(), c) == false)
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    return true;
}
int main()
{
    string s = "[()]{}";
    cout << bal(s);
}