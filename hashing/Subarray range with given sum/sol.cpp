#include <bits/stdc++.h>
using namespace std;
int subarray(int a[], int n, int sum)
{
    int res = 0;
    unordered_map<int, int> v;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += a[i];
        if (pre_sum == sum)
        {
            res++;
        }
        if (v.find(pre_sum - sum) != v.end())
        {
            res = res + v[pre_sum - sum];
        }
        v[pre_sum]++;
    }
    return res;
}
int main()
{
    int a[] = {1,4,20,3,10,5};
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 33;
    cout<<subarray(a, n, sum);
}