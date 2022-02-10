#include <bits/stdc++.h>
using namespace std;
const int R = 3;
const int C = 4;
void sol(int a[R][C])
{
    for (int i = 0; i < R; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < C; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int j = C - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
        }
    }
}
int main()
{
    int a[R][C] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 1, 2, 3}};
    sol(a);
}