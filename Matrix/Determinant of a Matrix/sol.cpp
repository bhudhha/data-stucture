#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void getcofator(vector<vector<int>> mat, vector<vector<int>> &temp, int p, int q, int n)
    {
        int i = 0, j = 0;
        for (int row = 0; row < n; row++)
        {
            temp[row].assign(n, 0);
            for (int col = 0; col < n; col++)
            {
                if (row != p && col != q)
                {
                    temp[i][j++] = mat[row][col];
                }
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
    int det(vector<vector<int>> mat, int n)
    {
        int D = 0;
        int sign = 1;
        vector<vector<int>> temp(n);
        if (n == 1)
        {
            return mat[0][0];
        }
        for (int f = 0; f < n; f++)
        {
            getcofator(mat, temp, 0, f, n);
            D += sign * mat[0][f] * det(temp, n - 1);
            sign = -sign;
        }
        return D;
    }
};
int main()
{
    solution ob;
    int n = 4;
    vector<vector<int>> mat(n);
    for (int i = 0; i < n; i++)
    {
        mat[i].assign(n, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << endl;
    cout << ob.det(mat, n) << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
}