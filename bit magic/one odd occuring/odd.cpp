#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,3,4};
    int res=0;
    for(int i=0;i<3;i++){
        res=res^a[i];
    }
    cout<<res;
    for(int i=1;i<=3;i++){
        cout<<(res^i);
    }
}