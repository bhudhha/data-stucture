#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    // cin >> n;
    string s = "123";
    // cin >> s;
    int count = 0;
    map<int, int> a;
    map<int, int> b;
    for (int i = 0; i < n; i++)
    {
        a[i - (s[i])]++;
        b[i + (s[i])]++;
    }
    for (auto e : a)
    {
        count += ((e.second) * (e.second - 1)) / 2;
    }
    for (auto w : a)
    {
        cout << w.first << " " << w.second << "\n";
    }
    cout << endl;
    for (auto r : b)
    {
        count += ((r.second) * (r.second - 1)) / 2;
    }
    for(auto q:b){
        cout<<q.first<<" "<<q.second<<"\n";
    }
    cout << count << "\n";
}