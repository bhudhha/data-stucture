#include <bits/stdc++.h>
using namespace std;
int dup2(vector<int> v)
{
    int c = 1;
    if (v.size() > 0)
    {
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1])
            {
                c++;
                if (c >= 3)
                {
                    v.erase(v.begin()+i);
                    i-=1;
                }
            }
            else
            {
                c = 1;
            }
        }
    }
    return v.size();
}
int main()
{
    vector<int> v = {0, 0, 1, 1, 1, 1, 2, 3, 3, 4};
    cout << dup2(v);
}