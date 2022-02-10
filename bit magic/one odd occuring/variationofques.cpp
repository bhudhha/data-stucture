#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,3,5,2};
    int res=0;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        res=res^a[i];
    }
    cout<<res<<endl;
    int find=0;
    for(int j=1;j<=n+1;j++){
        find=find^j;
    }
    cout<<find<<endl;
    cout<<(find^res);
}