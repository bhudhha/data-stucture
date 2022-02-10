#include <bits/stdc++.h>
using namespace std;
int ciel(int a[], int le, int x)
{
    int l = 0, r = le;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] >= x)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return r - 1;
}
int fun(vector<int> a)
{
    int lis[a.size()];
    lis[0] = a[0];
    int len = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > lis[len - 1])
        {
            lis[len] = a[i];
            len++;
        }
        else
        {
            int ind = ciel(lis, len-1, a[i]);
            lis[ind] = a[i];
        }
    }
    return len;
}
int main()
{
    vector<int> a = {5, 6, 1, 7, 4};
    cout << fun(a);
}