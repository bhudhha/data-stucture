#include <bits/stdc++.h>
using namespace std;
void threeWay(int a[], int n, int l, int h)
{
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<n)
    {
        if(a[mid]<l){
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]>h){
            swap(a[mid],a[high]);
            high--;
        }else{
            mid++;
        }
    }
}
int main()
{
    int a[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32} ;
    int n = sizeof(a) / sizeof(a[0]);
    int l = 20, h = 20;
    threeWay(a, n, l, h);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}