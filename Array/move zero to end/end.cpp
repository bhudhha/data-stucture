
#include <bits/stdc++.h>
using namespace std;
int zero(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=0){
            swap(a[i],a[count]);
            count++;
        }
    }
    return 0;
}
int main()
{
    int a[] = {10,8,0,0,13,0};
    int n = sizeof(a) / sizeof(a[0]);
    zero(a, n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}