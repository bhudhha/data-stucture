#include <bits/stdc++.h>
using namespace std;
int dup(int a[], int n)
{
    int res=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int a[] = {};
    int n = sizeof(a) / sizeof(a[0]);
    dup(a, n);
}