#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> stock(vector<int> A, int n)
{
    // code here
    vector<vector<int>> v;
    if (n == 1)
    {
        return v;
    }
    int i = 0;
    while (i < n - 1)
    {
        vector<int> v1;
        while ((i < n - 1) && (A[i + 1] <= A[i]))
        {
            i++;
        }
        if (i == n - 1)
        {
            break;
        }
        int buy = i;
        i = i + 1;
        v1.push_back(buy);
        while ((i < n) && A[i - 1] <= A[i])
        {
            i++;
        }
        int sell = i - 1;
        v1.push_back(sell);
        v.push_back(v1);
    }
    return v;
}
int main()
{
    vector<int> a = {100, 180, 260, 310, 40, 535, 695};
    int n=a.size();
    vector<vector<int>> vect = stock(a,n);
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
}