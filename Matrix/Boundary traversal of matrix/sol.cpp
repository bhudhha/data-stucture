#include <bits/stdc++.h>
using namespace std;
vector<int> boundary(vector<vector<int>> mat, int n, int m)
{
    vector<int> v;
    if (n == 1)
    {
        for (int i = 0; i < n; i++)
        {
            v.push_back(mat[0][i]);
        }
    }
    else if (m == 1)
    {
        for (int i = 0; i < m; i++)
        {
            v.push_back(mat[i][0]);
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            v.push_back(mat[0][i]);
        }
        for (int i = 1; i < n; i++)
        {
            v.push_back(mat[i][m - 1]);
        }
        for (int i = m - 2; i >= 0; i--)
        {
            v.push_back(mat[n - 1][i]);
        }
        for (int i = m - 2; i >= 1; i--)
        {
            v.push_back(mat[i][0]);
        }
    }
}
int main()
{
    int n = 4, m = 4;
    vector<vector<int>> mat(n);
    for (int i = 0; i < n; i++)
    {
        mat[i].assign(m, 0);
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    boundary(mat, n, m);
}