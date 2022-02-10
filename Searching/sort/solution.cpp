#include<bits/stdc++.h>
using namespace std;
void s(int a[],int n){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={2,5,3,7,8,1};
    int n=sizeof(a)/sizeof(a[0]);
    s(a,n);
}