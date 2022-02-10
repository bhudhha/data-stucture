#include<bits/stdc++.h>
using namespace std;
int tri(int a[], int n)
{
    int count=0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int k = i + 2;
        for (int j = i + 1; j < n; j++)
        {
            while(k<n && a[i]+a[j]>a[k]){
                k++;
            }
            if(k>j){
                count+=k-j-1;
            }
        }
    }
    return count;
}
int main()
{
    int a[] = {6, 4, 9, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<tri(a, n);
}