#include <bits/stdc++.h>
using namespace std;
bool fun(int a[], int n)
{
    int minVal = 0;
    int val = a[0];
    for (int i = 1; i < n; i++)
    {
        if (val > a[i])
        {
            minVal = i;
            val = a[i];
        }
    }
    if (minVal == 0 || minVal == n - 1)
    {
        return false;
    }
    reverse(a, a + minVal + 1);
    reverse(a + minVal + 1, a + n);
    reverse(a, a + n);
    bool flag1 = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            flag1 = false;
        }
    }
    bool flag2 = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] < a[i])
        {
            flag2 = false;
        }
    }
    if (flag1)
    {
        return true;
    }
    if(flag2){
        return true;
    }
    return false;
}
int main()
{
    int a[] = {4,3,1,2};
    int n = sizeof(a) / sizeof(a[0]);
    cout << fun(a, n);
    // reverse(a, a + 3);
    // reverse(a+3,a+n);
    // reverse(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
}