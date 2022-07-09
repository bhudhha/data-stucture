#include <bits/stdc++.h>
using namespace std;
void rotateImage(vector<vector<int>> &A)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(A[j][i], A[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(A[i].begin(), A[i].end());
    }
}
int main()
{
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    rotateImage(A);
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}