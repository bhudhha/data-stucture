#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "the.sky.is.blue";
    int i = 0;
    int n = s.length();
    int start = 0;
    string ans;
    while (i < n)
    {
        if (s[i] == '.')
        {
            string s1 = s.substr(start, i - start);
            cout << s1<<" ";
            reverse(s1.begin(), s1.end());
            ans += s1;
            ans += '.';
            start=i+1;
        }
        i++;
    }
    string sk=s.substr(start,n-start);
    reverse(sk.begin(),sk.end());
    ans+=sk;
    reverse(ans.begin(),ans.end());
    cout<<ans<<" ";
}