#include <bits/stdc++.h>
using namespace std;
bool sum(int a[], int n)
{
     sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        int l=i+1;
        int r=n-1;
        int x=a[i];
        while(l<r){
            if((x+a[l]+a[r])==0){
            return true;
            }
            else if((a+a[l]+a[r])<0){
                l++;
            }else{
                r--;
            }
        }
    }
    return false;
}
int main()
{
    int a[] = {60 ,-65 ,5 ,-21 ,8 ,93};
    int n = sizeof(a) / sizeof(a[0]);
    cout << sum(a, n);
}