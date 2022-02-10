#include<bits/stdc++.h>
using namespace std;
int subsum(int a[],int n){
    int maxEnding=a[0];
    int res=a[0];
    for(int i=1;i<n;i++){
        maxEnding=max(a[i],maxEnding+a[i]);
        res=max(maxEnding,res);
    }
    return res;
}
int main(){
    int a[]={-1,-2,-3,-4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<subsum(a,n);
}