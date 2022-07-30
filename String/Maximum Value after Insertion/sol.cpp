#include <bits/stdc++.h>
using namespace std;
string maxValue(string str, int k)
{
    int i = 0;
    int n = str.length();
    string ans = "";
    while ((i < n) && k <= (str[i] - '0'))
    {
        ans += str[i];
        i++;
    }
    ans += (k + '0');
    while (i < n)
    {
        ans+=str[i];
        i++;
    }
    return ans;
}
int main()
{
    string N = "6673";
    int k = 6;
    cout<<maxValue(N, k);
}