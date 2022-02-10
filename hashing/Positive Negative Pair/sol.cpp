#include <bits/stdc++.h>
using namespace std;
vector<int> paires(int arr[], int n)
{
    vector<int> result;
    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
        if (ump[abs(arr[i])] == 0)
        {
            ump[abs(arr[i])] = 1;
        }
        else
        {
            result.push_back((-1) * abs(arr[i]));
            result.push_back(abs(arr[i]));
            ump[abs(arr[i])] = 0;
        }

    return result;
}
int main()
{
    int a[] = {3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> y = paires(a, n);
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}