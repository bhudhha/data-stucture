#include <bits/stdc++.h>
using namespace std;
const int R = 3;
const int C = 3;
vector<int> add(int a[R][C])
{
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = i; j < C; j++)
        {
            sum += a[i][j];
        }
    }
    v.push_back(sum);
    sum=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<=i;j++){
            sum+=a[i][j];
        }
    }
    v.push_back(sum);
    return v;
}
int main()
{
    int a[R][C] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    vector<int> y = add(a);
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}