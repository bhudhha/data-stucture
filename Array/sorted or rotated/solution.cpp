#include <bits/stdc++.h>
using namespace std;
void checkIfSortRotated(int a[], int n)
{
    int min = a[0];
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            res=i;
        }
    }
    int flag1=1;
   for (int i = 1; i < res; i++) {
        if (a[i] < a[i - 1]) {
            cout<<a[i]<<" ";
            break;
        }
    }
 
    int flag2 = 1;
 
    for (int i = res + 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            flag2 = 0;
            break;
        }
    }
}
int main()
{
    int arr[] = {3,4,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    checkIfSortRotated(arr, n);
    return 0;
}
