#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "1432219";
    int k = 3;
    int n = s.length();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {

        while (k > 0 && !st.empty() && s[i] < st.top())
        {
            k--;
            st.pop();
        }
        st.push(s[i]);
        if (st.size() == 1 && s[i] == '0')
        {
            st.pop();
        }
    }
    while (k > 0 && !st.empty())
    {
        k--;
        st.pop();
    }
    string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}