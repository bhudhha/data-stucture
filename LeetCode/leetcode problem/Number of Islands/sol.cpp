#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>> &grid, int i, int j, int row, int col)
{
    if (i < 0 || j < 0 || i > (row - 1) || j > (col - 1) || grid[i][j] != '1')
    {
        return;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == '1')
            {
                grid[i][j] = '0';
                // count++;
                dfs(grid, i, j - 1, row, col);
                dfs(grid, i, j + 1, row, col);
                dfs(grid, i - 1, j, row, col);
                dfs(grid, i + 1, j, row, col);
            }
        }
    }
}
int numIslands(vector<vector<char>> &grid)
{
    int row = grid.size();
    int col = grid[0].size();
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == '1')
            {
                grid[i][j] = '0';
                count++;
                dfs(grid, i, j - 1, row, col);
                dfs(grid, i, j + 1, row, col);
                dfs(grid, i - 1, j, row, col);
                dfs(grid, i + 1, j, row, col);
            }
        }
    }
    return count;
}
int main()
{
    vector<vector<char>> grid ;
    int ans = numIslands(grid);
    cout << ans;
}