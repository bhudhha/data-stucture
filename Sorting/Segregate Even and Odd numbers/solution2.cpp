#include<bits/stdc++.h>
using namespace std;
void seg(int a[],int n){
    vector<int> v;
    int i,j;
    for( i=0;i<n;i++){
        if(a[i]%2==0){
            v.push_back(a[i]);
        }
    }
    sort(v.begin(),v.end());
    int l=v.size();
    for( j=0;j<n;j++){
        if(a[j]%2!=0){
            v.push_back(a[j]);
        }
    }
    partial_sort(v.begin()+l, v.end(), v.end());
    for(int i=0;i<v.size();i++){
     a[i]=v[i];
    }
}
int main(){
    int a[]={12, 34, 45, 9, 8, 90, 3};
    int n=sizeof(a)/sizeof(a[0]);
    seg(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}