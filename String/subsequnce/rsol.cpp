#include <bits/stdc++.h>
using namespace std;
int main()
{
    string A = "RATAT";
    string B = "KARAATTAT";
    int j = 0;
    for (int i = 0; i < B.length() && j < A.length(); i++)
    {
        if (A[j] == B[i])
        {
            j++;
        }
    }
    if (j == A.length())
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}