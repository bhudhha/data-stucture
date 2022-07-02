#include <bits/stdc++.h>
using namespace std;
void fun(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                cout << mat[i][j] <<" ";
            }
        }
        else
        {
            for (int k = mat[i].size() - 1; k >= 0; k--)
            {
                cout << mat[i][k]<<" ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> mat = {{45, 48, 54}, {21, 89, 87}, {70, 78, 15}};
    fun(mat);
}