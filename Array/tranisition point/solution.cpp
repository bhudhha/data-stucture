#include <bits/stdc++.h>
using namespace std;
int t(int a[], int n)
{
    if (a[0] == 1 && a[n - 1] == 1)
    {
        return 0;
    }
    if (a[0] == 0 && a[n - 1] == 0)
    {
        return -1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            return i;
        }
    }

}
int main(){
    int a[]={0,0};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<t(a,n);
}