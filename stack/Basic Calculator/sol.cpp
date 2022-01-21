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
int calculate(string s)
{
    stack<char> num;
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (isdigit(c))
        {
            num.push(c);
        }
        else if (c == ' ')
        {
            continue;
        }
        else if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                char oper = st.top();
                st.pop();
                int op1 = INT_MAX, op2 = INT_MAX;
                if (num.empty())
                {
                    op1 = num.top() - '0';
                    num.pop();
                }
                if (num.empty())
                {
                    int op1 = num.top() - '0';
                    num.pop();
                }
                if (oper == '+' && op1 != INT_MAX && op2 != INT_MAX)
                {
                    ans += op1 + op2;
                }
                if (oper == '-' && op1 != INT_MAX)
                {
                    ans = ans - op1;
                }
                if (oper == '-' && op2 != INT_MAX)
                {
                    ans = ans - op2;
                }
                if (oper == '-' && op1 == INT_MAX && op2 == INT_MAX)
                {
                    ans = -ans;
                }
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(c) <= prec(st.top()))
            {
                char oper = st.top();
                st.pop();
                int op1 = INT_MAX, op2 = INT_MAX;
                if (num.empty())
                {
                    op1 = num.top() - '0';
                    num.pop();
                }
                if (num.empty())
                {
                    int op1 = num.top() - '0';
                    num.pop();
                }
                if (oper == '+' && op1 != INT_MAX && op2 != INT_MAX)
                {
                    ans += op1 + op2;
                }
                if (oper == '-' && op1 != INT_MAX)
                {
                    ans = ans - op1;
                }
                if (oper == '-' && op2 != INT_MAX)
                {
                    ans = ans - op2;
                }
                if (oper == '-' && op1 == INT_MAX && op2 == INT_MAX)
                {
                    ans = -ans;
                }
            }
        }
    }
    while (!st.empty())
    {
        char oper = st.top();
        st.pop();
        int op1 = INT_MAX, op2 = INT_MAX;
        if (num.empty())
        {
            op1 = num.top() - '0';
            num.pop();
        }
        if (num.empty())
        {
            int op1 = num.top() - '0';
            num.pop();
        }
        if (oper == '+' && op1 != INT_MAX && op2 != INT_MAX)
        {
            ans += op1 + op2;
        }
        if (oper == '-' && op1 != INT_MAX)
        {
            ans = ans - op1;
        }
        if (oper == '-' && op2 != INT_MAX)
        {
            ans = ans - op2;
        }
        if (oper == '-' && op1 == INT_MAX && op2 == INT_MAX)
        {
            ans = -ans;
        }
    }
    return ans;
}
int main()
{
    string s = "1 + 1";
    int ans = calculate(s);
    cout<<ans;
}