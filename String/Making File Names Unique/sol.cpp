#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> names = {"gta", "gta(1)", "gta", "avalon"};
    int n = names.size();
    unordered_map<string, int> mp;
    for (int i = 0; i < names.size(); i++)
    {
        int count = 1;
        string temp = names[i];
        if (mp.find(temp) != mp.end())
            count = mp[temp];
        while (mp.find(temp) != mp.end())
        {
            temp = names[i] + '(' + to_string(count) + ')';
            count++;
        }
        // mp[names[i]] = count;
        names[i] = temp;
        mp[names[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << " ";
    }
}