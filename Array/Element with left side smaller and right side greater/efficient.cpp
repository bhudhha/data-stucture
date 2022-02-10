#include <bits/stdc++.h>
using namespace std;
int count(int a[], int n){
    int lmax[n],rmin[n];
    lmax[0]=INT_MIN;
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],a[i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<lmax[i]<<" ";
    }
    cout<<endl;
    rmin[n-1]=INT_MAX;
    for(int i=n-2;i>=0;i--){
        rmin[i]=min(rmin[i+1],a[i+1]);
    }
     for(int i=0;i<n;i++){
        cout<<rmin[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(lmax[i]<a[i] && rmin[i]>a[i]){
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[] ={5, 1, 4, 3, 6, 8, 10, 7, 9}; 

    int n = sizeof(a) / sizeof(a[0]);
    // cout<<n;
    cout << count(a, n);
}