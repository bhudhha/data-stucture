#include <bits/stdc++.h>
using namespace std;
int zero(int a[], int n)
{
    unordered_map<int,int> v;
    int res = 0, pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += a[i];
        if (pre_sum == 0)
        {
            res++;
        }
        if (v.find(pre_sum) != v.end())
        {
            res+=v[pre_sum];
        }
        v[pre_sum]++;
    }
    return res;
}
int main()
{
    int a[] =  {6,-1,-3,4,-2,2,4,6,-12,-7};
    int n = sizeof(a) / sizeof(a[0]);
    cout << zero(a, n);
}