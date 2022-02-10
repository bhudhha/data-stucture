#include <bits/stdc++.h>
using namespace std;
void insertion(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main()
{
    int a[] = {1, 4, 3, 5, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    insertion(a, n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}