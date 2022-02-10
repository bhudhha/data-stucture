#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dis(int n)
{
    int matrix[n][n];
    memset(matrix, 0, n * n * sizeof(int));
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int count = 1;
    while (left <= right && top <= bottom)

    {

        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = count++;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = count++;
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                matrix[bottom][i] = count++;
            }

            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                matrix[i][left] = count++;
            }
            left++;
        }
    }
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(matrix[i][j]);
        }
        ans.push_back(v);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = dis(n);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}