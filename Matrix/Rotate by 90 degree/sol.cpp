#include <bits/stdc++.h>
using namespace std;
void rot90(vector<vector<int>> vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(vec[i][j], vec[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            swap(vec[low][i], vec[high][i]);
            low++;
            high--;
        }
    }
}
int main()
{
    vector<vector<int>> vec;
    int col, row, x;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        vector<int> v;
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            v.push_back(x);
        }
        vec.push_back(v);
    }
    rot90(vec, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << vec[i][j] << " ";
        }
    }
}