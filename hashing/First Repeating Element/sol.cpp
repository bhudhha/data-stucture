#include<bits/stdc++.h>
using namespace std;
int fr(int a[],int n){
unordered_map<int ,int> m;
for(int i=0;i<n;i++){
    m[a[i]]++;
}
for(auto e:m){
    cout<<e.first<<" ";
}
}
int main(){
    int a[]= {1, 5, 3, 4, 3, 5, 6};
    int n=sizeof(a)/sizeof(a[0]);
    fr(a,n);
}