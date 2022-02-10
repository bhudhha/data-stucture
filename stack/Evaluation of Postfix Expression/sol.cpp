#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "231*+9-";
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            int val = (int)(s[i] - '0');
            st.push(val);
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            int ans = 0;
            switch (s[i])
            {
            case '+':

                ans = op2 + op1;
                st.push(ans);
                break;
            case '-':
                ans = op2 - op1;
                st.push(ans);
                break;
            case '*':
                ans = op2 * op1;
                st.push(ans);
                break;
            case '/':
                ans = op2 / op1;
                st.push(ans);
                break;
            default:
                cout << "-1" << endl;
                break;
            }
        }
    }

    int valans = st.top();
    return valans;
}