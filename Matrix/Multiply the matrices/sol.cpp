#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mut(vector<vector<int>> x, vector<vector<int>> y)
{
    vector<vector<int>> z;
    // int res[x.size()][y[0].size()];
    int sum=0;
    for (int i = 0; i < x.size(); i++)
    {
        vector<int> v;
        for (int j = 0; j < y[0].size(); j++)
        {
            // vector<int> v2;
            for (int k = 0; k < x[i].size(); k++)
            {
            sum += x[i][k] * y[k][j];
            }
            v.push_back(sum);
            sum=0;
        }
        z.push_back(v);
    }
    // for (int i = 0; i < x.size(); i++)
    // {
    //     vector<int> v;
    //     for (int j = 0; j < y[0].size(); j++)
    //     {
    //         v.push_back(res[i][j]);
    //     }
    //     z.push_back(v);
    // }
    return z;
}
vector<vector<int>> enter(int col, int row)
{
    vector<vector<int>> vec;
    int x;
    for (int i = 0; i < col; i++)
    {
        vector<int> v;
        for (int j = 0; j < row; j++)
        {
            cin >> x;
            v.push_back(x);
        }
        vec.push_back(v);
    }
    return vec;
}
void print(vector<vector<int>> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int col1, row1, col2, row2;
    cout << "Enter the col1 and row1 " << endl;
    cin >> col1 >> row1;
    vector<vector<int>> x = enter(col1, row1);
    cout << "Enter the col2 and row2 " << endl;
    cin >> col2 >> row2;
    vector<vector<int>> y = enter(col2, row2);
    print(x);
    cout << " multiply " << endl;
    print(y);
    cout << "=" << endl;
    vector<vector<int>> z = mut(x, y);
    print(z);
}