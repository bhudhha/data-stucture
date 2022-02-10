#include<bits/stdc++.h>
using namespace std;
void wave(int arr[],int n){
            int front =0;
        int end=0;
        for(int i=0;i<n/2;i++){
          front=i*2;
            end=(i+1)*2;
            reverse(arr+front,arr+end);
        }
        reverse(arr+end,arr+n);
}
int main(){
    int a[]={2,4,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    wave(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}