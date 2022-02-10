#include <bits/stdc++.h>
using namespace std;
int issub(string A, string B)
{
    int i = 0, j = 0;
    while (i < A.length() && j < B.length())
    {
        if (A[i] == B[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return j == B.length();
}
int main()
{
    string s1 = "abcd";
    string s2 = "ad";
   cout<<issub(s1, s2);
}