#include<bits/stdc++.h>
using namespace std;
void maxi(int a[],int n){
    int i=0,j=n-1;
    int res=0;
    while(i<j){
        if(a[i]<=a[j]){
            res=max(res,j-i);
            j--;
            i++;
        }else{
            j--; i++;
        }
    }
    cout<<res<<" ";
}
int main(){
    int a[]= {1, 2, 3, 4, 5, 6};
    int n=sizeof(a)/sizeof(a[0]);
    maxi(a,n);
}