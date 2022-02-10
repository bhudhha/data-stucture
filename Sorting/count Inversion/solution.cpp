#include <bits/stdc++.h>
using namespace std;
int countAndMerge(int a[], int l, int m, int h)
{
    int res=0;
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[m + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k++] = left[i++];
        }
        else
        {
            a[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1){
        a[k++]=left[i++];
    }
    while(j<n2){
        a[k++]=right[j++];
    }
    return res;
}
int countInversion(int a[], int l, int r)
{
    int res = 0;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        res += countInversion(a, l, m);
        res += countInversion(a, m + 1, r);
        res += countAndMerge(a, l, m, r);
    }
    return res;
}
int main()
{
    int a[] = {10,10,10};
    int n = sizeof(a) / sizeof(a[0]);
    cout << countInversion(a, 0, n - 1);
    // cout<<(1/2);
}