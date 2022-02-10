#include <bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int> v)
{
    vector<int> x;
    int l = v[v.size() - 1];
    x.push_back(l);
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] > l)
        {
            l = v[i];
            x.push_back(l);
        }
    }
    return x;
}
int main()
{
    vector<int> v = {7, 10, 4, 3, 6, 5, 2};
    vector<int> y = leader(v);
    for (int i = y.size()-1; i >=0; i--)
    {
        cout << y[i] << " ";
    }
}