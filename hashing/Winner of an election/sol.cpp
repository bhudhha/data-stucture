#include <bits/stdc++.h>
using namespace std;
vector<string> winner(string a[], int n)
{
    unordered_map<string, int> s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        s[a[i]]++;
    }
    int key = 0;
    string winner;
    for (auto e : s)
    {
        int till = e.second;
        string val = e.first;
        if (key < till)
        {
            key = till;
            winner = val;
        }
        if (key == till && winner > val)
        {
            winner = val;
        }
    }
    v.push_back(winner);
    string k = to_string(key);
    v.push_back(k);
    return v;
}
int main()
{
    string arr[] = {"john", "johnny", "jackie", "johnny", "john", "jackie", "jamie", "jamie", "john", "johnny", "jamie", "johnny", "john"};
    int n = 13;
    winner(arr, n);
}