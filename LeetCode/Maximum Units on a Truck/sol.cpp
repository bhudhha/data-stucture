#include <bits/stdc++.h>
using namespace std;
static bool my(vector<int> &a, vector<int> &b)
{
    return a[1] > b[1];
}
int main()
{
    vector<vector<int>> vec = {{1, 3}, {2, 2}, {3, 1}};
    sort(vec.begin(), vec.end(), my);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int k = 0;k< vec[i].size(); k++)
        {
            cout << vec[i][k] << " ";
        }
        cout << endl;
    }
}