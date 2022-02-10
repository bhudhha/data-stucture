#include <bits/stdc++.h>
using namespace std;
int isequli(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    int lsum = 0, rsum = 0;
    for (int i = 0; i < n; i++)
    {
        rsum=s-a[i]-lsum;
        if(lsum==rsum){
            return i;
        }
        lsum+=a[i];
    }
    return -1;
}
int main()
{
    int a[] = {-2,2,4};
    int n = sizeof(a) / sizeof(a[0]);
    cout << isequli(a, n);
}