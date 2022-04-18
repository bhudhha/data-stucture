/*
According to Wikipedia's article: "The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician John Horton Conway in 1970."

The board is made up of an m x n grid of cells, where each cell has an initial state: live (represented by a 1) or dead (represented by a 0). Each cell interacts with its eight neighbors (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):

Any live cell with fewer than two live neighbors dies as if caused by under-population.
Any live cell with two or three live neighbors lives on to the next generation.
Any live cell with more than three live neighbors dies, as if by over-population.
Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the m x n grid board, return the next state.
*/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fun(vector<vector<int>> board, int n, int m)
{
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    vector<vector<int>> ans(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ln = 0;
            for (int k = 0; k < 8; k++)
            {
                if (i + dx[k] >= 0 && i + dx[k] < n && j + dy[k] >= 0 && j + dy[k] < m && board[i + dx[k]][j + dy[k]] == 1)
                {
                    ln++;
                }
            }
            if (board[i][j] == 1 && ln < 2)
            {
                ans[i][j] = 0;
            }
            if (board[i][j] == 1 && (ln == 2 || ln == 3))
            {
                ans[i][j] = 1;
            }
            if (board[i][j] == 1 && ln > 3)
            {
                ans[i][j] = 0;
            }
            if (board[i][j] == 0 && ln == 3)
            {
                ans[i][j] = 1;
            }
        }
    }
    return ans;
}
void print(vector<vector<int>> ans, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j];
        }
        cout << "\n";
    }
}
int main()
{
    vector<vector<int>> board = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};
    int n = board.size();
    int m = board[0].size();
    print(board, n, m);
    cout << "\n";
    vector<vector<int>> ans = fun(board, n, m);
    print(ans, n, m);
}