#include <bits/stdc++.h>
using namespace std;
int mean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}
int median(int a[], int n)
{
    sort(a, a + n);
    if (n % 2 == 0)
    {
        int index = n/2;
        int f=a[index];
        int s=a[index-1];
        int median=(f+s)/2;
        return median;
    }
    else
    {
        return a[n / 2];
    }
}
int main()
{
    int a[] =  {2,3,4,8,10};



    int n = sizeof(a) / sizeof(a[0]);
    cout << mean(a, n)<<" ";
    cout << median(a, n);
}