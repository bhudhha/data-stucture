#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={3,5,5,4,4,4,7,7,7,7};
    int res=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
       res=res^a[i];
    }
    cout<<res;
}