#include <bits/stdc++.h>
using namespace std;
void dis(vector<vector<int>> v)
{
    int n = v.size();
    int m = v[0].size();
    cout << n << m << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int rain(vector<vector<int>> v)
{
    int n = v.size();
    int m = v[0].size();
    vector<vector<int>> rowlmax;
    vector<vector<int>> rowrmax;
    vector<vector<int>> coltmax;
    vector<vector<int>> colbmax;
    for (int i = 0; i < n; i++)
    {
        vector<int> lmax;
        lmax.push_back(v[i][0]);
        for (int j = 1; j < m; j++)
        {
            lmax.push_back(max(lmax.back(), v[i][j]));
        }
        rowlmax.push_back(lmax);
    }
    cout << endl;
    dis(rowlmax);
    for (int i = 0; i < n; i++)
    {
        vector<int> rmax(m);
        rmax[m - 1] = v[i][m - 1];
        for (int j = m - 2; j >= 0; j--)
        {
            rmax[j] = max(rmax[j + 1], v[i][j]);
        }
        rowrmax.push_back(rmax);
    }
    cout << endl;
    dis(rowrmax);
    for (int i = 0; i < m; i++)
    {
        vector<int> tmax(n);
        tmax[0] = v[i][0];
        for (int j = 0; j < n; j++)
        {
            tmax[j] = max(tmax[j - 1], v[i][j]);
        }
        coltmax.push_back(tmax);
    }
    cout << endl;
    dis(coltmax);
    for (int i = 0; i < m; i++)
    {
        vector<int> bmax(n);
        bmax[n - 1] = v[i][0];
        for (int j = n - 2; j >= 0; j--)
        {
            bmax[j] = max(bmax[j + 1], v[i][j]);
        }
        colbmax.push_back(bmax);
    }
    cout << endl;
    dis(colbmax);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int row=min(rowlmax[i][j],rowrmax[i][j]);
            int col=min(coltmax[i][j],colbmax[i][j]);
            int res=res+min(row,col)-v[i][j];
        }
    }
    return res;
}
int main()
{
    vector<vector<int>> v = {{3, 3, 3, 3, 3}, {3, 2, 2, 2, 3}, {3, 2, 1, 2, 3}, {3, 2, 2, 2, 3}, {3, 3, 3, 3, 3}};
    dis(v);
    int ans = rain(v);
    cout << ans << endl;
}