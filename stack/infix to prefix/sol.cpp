#include <bits/stdc++.h>
using namespace std;
int operation(char c, int a, int b)
{
    if (c == '*')
    {
        return a * b;
    }
    else if (c == '/')
    {
        return a / b;
    }
    else if (c == '+')
    {
        return a + b;
    }
    else
    {
        return a - b;
    }
}
void cal(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        char c = s[i];
        if (isdigit(c)!=0)
        {
            st.push(c);
        }
        else
        {
            int op1 = (int)st.top();
            cout<<op1<<endl;
            st.pop();
            int op2 = (int)st.top();
            cout<<op2<<endl;
            st.pop();
            int y = operation(c, op1, op2);
            st.push(y);
        }
    }
    int ans = st.top();
    cout << ans << endl;
}
int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtoprefix(string s)
{
    string prefix;
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        char c = s[i];
        if (isdigit(c) != 0)
        {
            prefix += c;
        }
        else if (c == ')')
        {
            st.push(')');
        }
        else if (c == '(')
        {
            while (c != ')')
            {
                prefix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(c) < prec(st.top()))
            {
                prefix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        prefix += st.top();
        st.pop();
    }
    reverse(prefix.begin(), prefix.end());
    return prefix;
}
int main()
{
    string s = "3+10*2";
    string ans = infixtoprefix(s);
    cout << ans<<endl;
    cal(ans);
    return 0;
}