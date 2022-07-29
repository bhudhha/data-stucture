#include <bits/stdc++.h>
using namespace std;
string reduce(string str, int k)
{
    stack<pair<char, int>> s;
    string ans;
    s.push({str[0], 1});
    for (int i = 1; i < str.length(); i++)
    {
        if (s.top().first == str[i])
        {
            auto p = s.top();
            s.pop();
            p.second++;
            s.push(p);
            if (s.top().second == k)
            {
                s.pop();
            }
        }
        else
        {
            s.push({str[i], 1});
        }
    }
    while (!s.empty())
    {
        ans+=s.top().first;
        s.pop();

    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    int k = 3;
    string str = "qddxxxd";
    cout << reduce(str, k);
}