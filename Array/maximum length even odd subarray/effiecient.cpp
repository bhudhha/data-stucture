#include <bits/stdc++.h>
using namespace std;
int evenodd(int a[], int n)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] % 2 == 0 && a[i - 1] % 2 != 0) || (a[i] % 2 != 0 && a[i - 1] % 2 == 0))
        {
            count++;
        }
        else{
            count=1;
        }
        res=max(res,count);
    }
    return res;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 7, 9}; 

    int n = sizeof(a) / sizeof(a[0]);
    cout<<evenodd(a, n);
}