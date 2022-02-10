#include <bits/stdc++.h>
using namespace std;
vector<int> inter(int arr1[], int arr2[], int N, int M)
{
    vector<int> v;
    int i = 0, j = 0;
    while (i < N && j < M)
    {
        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return v;
}
int main()
{
    int a[] = {1, 2, 2, 3, 4};

    int b[] = {2, 2, 4, 6, 7, 8};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    vector<int> y = inter(a, b, n, m);
    if (y.size() == 0)
    {
        cout << "no" << endl;
    }
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}