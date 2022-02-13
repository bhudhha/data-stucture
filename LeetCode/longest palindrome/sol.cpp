// A Dynamic Programming based C++ program for LPS problem
// Returns the length of the longest palindromic subsequence in seq
#include <bits/stdc++.h>
using namespace std;

// A utility function to get max of two integers
int max(int x, int y)
{
    return (x > y) ? x : y;
}

// Returns the length of the longest palindromic subsequence in seq
int lps(char *str)
{
    int n = strlen(str);
    int i, j, cl;
    int L[n][n];
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            L[x][y] = 0;
        }
    }

    for (i = 0; i < n; i++)
        L[i][i] = 1;
    for (cl = 2; cl <= n; cl++)
    {
        for (i = 0; i < n - cl + 1; i++)
        {
            j = i + cl - 1;
            if (str[i] == str[j] && cl == 2)
                L[i][j] = 2;
            else if (str[i] == str[j])
                L[i][j] = L[i + 1][j - 1] + 2;
            else
                L[i][j] = max(L[i][j - 1], L[i + 1][j]);
        }
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            cout << L[x][y] << " ";
        }
        cout << endl;
    }
    return L[0][n - 1];
}

int main()
{
    char seq[] = "bbbab";
    int n = strlen(seq);
    int ans = lps(seq);
    cout << ans;
    getchar();
    return 0;
}
