#include <bits/stdc++.h>
using namespace std;
void rotd(int a[], int n, int d)
{
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
}
int main()
{
    int a[] = {1,2,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    int d = 2;
    rotd(a, n, d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}