#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> chain(int hash, int arr[], int n)
{
    vector<vector<int>> v(1, vector<int>(1, 0));
    for (int i = 0; i < n; i++)
    {
        int idx = arr[i] % hash;
        if (idx == 0)
        {
            if (v[0][0] == 0)
            {
                v[0][0] = arr[i];
            }else{
                v[0].push_back(arr[i]);
            }
        }
    }
    return v;
}
int main()
{
    int a[] = {92, 4, 14, 24, 44, 91};
    int hashsize = 10;
    int n = sizeof(a) / sizeof(a[0]);
    vector<vector<int>> y = chain(hashsize, a, n);
    for (int i = 0; i < y.size(); i++)
    {
        for (int j = 0; j < y[i].size(); j++)
        {
            cout << y[i][j] << " ";
        }
        cout << endl;
    }
}