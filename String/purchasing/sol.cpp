#include <bits/stdc++.h>
using namespace std;
void recursion(int &total, int curr, int m)
{
    if (curr < m)
        return;
    else
        total += curr / m;
    curr = curr % m + curr / m;
    recursion(total, curr, m);
}
int purchaseSupplies(int n, int cost, int m)
{
    int total = n / cost;
    int curr = total;
    recursion(total, curr, m);
    return total;
}
void fun(string s)
{
    vector<int> r;
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            r.push_back(num);
            num = 0;
        }
        else
        {
            num = num * 10 + (s[i]-'0');
        }
    }
   
    r.push_back(num);
    cout << purchaseSupplies(r[0], r[1], r[2]);
    cout << endl;
}
int main()
{
    vector<string> s = {"10 2 5", "12 4 4", "6 2 2"};
    for (int i = 0; s.size(); i++)
        fun(s[i]);
}