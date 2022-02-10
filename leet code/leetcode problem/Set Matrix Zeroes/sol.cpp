#include <bits/stdc++.h>
using namespace std;
void mat(vector<vector<int>> &matrix)
{
    vector<pair<int, int>> p;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                p.push_back(make_pair(i, j));
            }
        }
    }
    for (auto e : p)
    {

        for (int i = 0; i < matrix.size(); i++)
        {

            matrix[i][e.second] = 0;
        }
        for (int i = 0; i < matrix[e.first].size(); i++)
        {

            matrix[e.first][i] = 0;
        }
    }
}
int main()
{
    vector<vector<int>> v = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    mat(v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}