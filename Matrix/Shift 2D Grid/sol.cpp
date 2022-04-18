#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> r(vector<vector<int>> grid, int k)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> ans(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int newj = (j + k) % m;
            int newi = (i + (j + k) / m) % n;
            ans[newi][newj] = grid[i][j];
        }
    }
    return ans;
}
void print(vector<vector<int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
}
int main()
{
    vector<vector<int>> grid = {{3, 8, 1, 9}, {19, 7, 2, 5}, {4, 6, 11, 10}, {12, 0, 21, 13}};
    int k = 4;
    print(grid);
    cout << "\n";
    vector<vector<int>> ans = r(grid, k);
    print(ans);
}