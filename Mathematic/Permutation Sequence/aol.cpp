#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int string_to_int(string s)
    {
        int res = 0;
        for (auto i : s)
            res = res * 10 + (i - '0');
        return res;
    }
    vector<int> permutaion(int N)
    {
        string s = "";
        while (N)
        {
            s += char(N % 10 + '0');
            N /= 10;
        }
        sort(s.begin(), s.end());
        int cnt = 0;
        int tot = 0;
        do
        {
            tot += string_to_int(s);
            cnt++;
        } while (next_permutation(s.begin(), s.end()));
        vector<int> res;
        res.push_back(cnt);
        res.push_back(tot);
        return res;
    }
};
int main()
{
    Solution s1;
    int n = 12;
    vector<int> ans = s1.permutaion(n);
    cout << ans[0] << " " << ans[1] << " ";
}