#include<bits/stdc++.h>
using namespace std;
int bit(int a[],int n){
     if(a[n-1]>a[n-2]){
	        return a[n-1];
	    }
	    int largest=0;
	    for(int i=1;i<n;i++){
	        if(a[i]>a[largest]){
	           largest=i;
	        }
	    }
	    return a[largest];
}
int main(){
    int a[]= {1,15,25,45,42,21,17,12,13};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<bit(a,n);
}