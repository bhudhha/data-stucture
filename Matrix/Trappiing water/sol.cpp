#include <bits/stdc++.h>
using namespace std;
int trap(vector<vector<int>> m)
{
    int r = m.size();
    int c = m[0].size();
    cout << r << " " << c << endl;
    int a[r][c], b[r][c], c1[r][c], d[r][c];
    for (int i = 0; i < r; i++)
    {
        a[i][0] = m[i][0];
        for (int j = 1; j < c; j++)
        {
            a[i][j] = max(a[i][j - 1], m[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        b[i][c - 1] = m[i][c - 1];
        for (int j = c - 2; j >= 0; j--)
        {
            b[i][j] = max(b[i][j + 1], m[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        c1[0][i] = m[0][i];
        for (int j = 1; j < r; j++)
        {
            c1[j][i] = max(c1[j - 1][i], m[j][i]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        d[r - 1][i] = m[r - 1][i];
        for (int j = r - 2; j >= 0; j--)
        {
            d[j][i] = max(d[j + 1][i], m[j][i]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           cout<<d[i][j]<<" ";
        }

        cout<<endl;
    }
    int res = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res = res + (min(min(a[i][j], b[i][j]), min(c1[i][j], d[i][j])) - m[i][j]);
        }
    }
    return res;
}
int main()
{
    vector<vector<int>> m = {{12,13,1,12},{13,4,13,12},{13,8,10,12},{12,13,12,12},{13,13,13,13}};
   cout<<trap(m);
}