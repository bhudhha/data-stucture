#include <bits/stdc++.h>
using namespace std;
int crossnum(char c)
{
    if (c == 'I')
    {
        return 1;
    }
    else if (c == 'V')
    {
        return 5;
    }
    else if (c == 'X')
    {
        return 10;
    }
    else if (c == 'L')
    {
        return 50;
    }
    else if (c == 'C')
    {
        return 100;
    }
    else if (c == 'D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}
int romanTonumber(string s)
{
    int n = s.length();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        st.push(s[i]);
    }
    char c = st.top();
    st.pop();
    int num = crossnum(c);
    int sum = num;
    while (st.empty() == false)
    {
        if (crossnum(c)<=crossnum(st.top()))
        {
            sum += crossnum(st.top());
        }
        else
        {
            sum -= crossnum(st.top());
        }
        c = st.top();
        st.pop();
    }
    return sum;
}
int main()
{
    string s = "MCMXCIV";
    int ans = romanTonumber(s);
    cout<<ans;
}