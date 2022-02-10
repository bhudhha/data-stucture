#include<bits/stdc++.h>
using namespace std;
int isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int a[]={1,2,3,1,4};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<isSorted(a,n);
}