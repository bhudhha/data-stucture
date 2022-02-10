#include<bits/stdc++.h>
using namespace std;
void rearrange(int a[],int n){
    int max_idx=n-1,min_idx=0;
    int max_element=a[max_idx]+1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]+=(a[max_idx]%max_element)*max_element;
            max_idx--;
        }else{
            a[i]+=(a[min_idx]%max_element)*max_element;
            min_idx++;
        }
    }
    for(int i=0;i<n;i++){
        a[i]=a[i]/max_element;
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    rearrange(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}