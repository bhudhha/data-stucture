#include <bits/stdc++.h>
using namespace std;
int maxArray(string s)
{
    set<int> st;
    int start = 0;
    int end = 0;
    int count = 0;
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.find(s[i]) != st.end())
        {
            st.erase(s[i]);
            while (start <= i)
            {
                if (s[start] != s[i])
                {
                    start++;
                    count--;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            count++;
            end = i;
            st.insert(s[i]);
            res = max(res, count);
        }
    }
}
int main()
{
    string s = "dvdf";
    int s = maxArray(s);
}