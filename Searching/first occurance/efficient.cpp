#include <bits/stdc++.h>
using namespace std;
int fOc(int a[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid=(low+high)/2;
        if(a[mid]>x){
            high=mid-1;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            if(mid==0 || a[mid]!=a[mid-1]){
                return mid;
            }else{
                high =mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int a[] = {5,5,10, 10, 10, 10, 20, 20, 20, 30, 30, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 5;
    cout<<fOc(a, n, x);
}