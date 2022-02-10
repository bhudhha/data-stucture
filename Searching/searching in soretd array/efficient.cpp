#include <bits/stdc++.h>
using namespace std;
int firstocu(int a[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int mid=(low+high)/2;
       if(a[mid]==x){
           return mid;
       }else if(a[mid]>x){
           high=mid-1;
       }
       else{
           low=mid+1;
       }
    }
    return -1;
}
int main()
{
    int a[] = {10, 10, 10, 20, 20, 30};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 10;
    cout<<firstocu(a, n, x);
}