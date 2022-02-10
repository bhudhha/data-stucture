#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int h)
{
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
            a[k++] = right[j++];
        }
    }
    while (i < n1)
    {
        a[k++] = left[i++];
    }
    while (j < n2)
    {
        a[k++] = right[j++];
    }
}
void mergsort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergsort(a, l, m);
        mergsort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main()
{
    int a[] = {3,5,2,1,5,74,2};
    int n = sizeof(a) / sizeof(a[0]);
    mergsort(a, 0, n - 1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}