#include <bits/stdc++.h>
using namespace std;
bool check(char r, char c)
{
    if ((r == '(' && c == ')') || (r == '{' && c == '}') || (r == '[' && c == ']'))
    {
        return true;
    }
    return false;
}
bool valid(string s)
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
            if (st.empty() == true)
            {
                return false;
            }
            char r = st.top();
            st.pop();
            if (check(r, c) == false)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string s = "{}[()]";
    cout << valid(s);
}