#include <bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector<int>> mat, int r, int c)
{
    vector<int> v;
    int top = 0, left = 0, right = c - 1, bottom = r - 1;
    while (top < bottom && left < right)
    {
        for (int i = left; i <= right; i++)
        {
            v.push_back(mat[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            v.push_back(mat[i][right]);
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            v.push_back(mat[bottom][i]);
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            v.push_back(mat[i][left]);
        }
        left++;
    }
    return v;
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
    vector<int> y = spiral(mat, n, m);
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}