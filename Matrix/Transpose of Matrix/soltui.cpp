#include <bits/stdc++.h>
using namespace std;
void trans(vector<vector<int>> vec)
{
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec[i].size();j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
}
int main()
{
    vector<vector<int>> vec;
    int col, row, x;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        vector<int> v;
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            v.push_back(x);
        }
        vec.push_back(v);
    }
    trans(vec);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << vec[i][j] << " ";
        }
    }
}