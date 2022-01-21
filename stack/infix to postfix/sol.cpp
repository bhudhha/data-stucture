#include <bits/stdc++.h>
using namespace std;
int prec(char s)
{
    if (s == '^')
    {
        return 3;
        return 3;
    }
    else if (s == '*' || s == '/')
    {
        return 2;
    }
    else if (s == '+' || s == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixTopostfix(string s)
{
    string ans;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            ans += c;
        }
        else if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(c) <= prec(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        ans+=st.top();
        st.pop();
        /* code */
    }
    

    return ans;
}
int main()
{
    string s = "a+(b*c)";
    string ans = infixTopostfix(s);
    cout << ans;
}