#include<bits/stdc++.h>
using namespace std;
int subsum(int a[],int n){
    int sum_so_far=INT_MIN;
    int maxEnding_here=0;
    for(int i=0;i<n;i++){
        maxEnding_here=maxEnding_here+a[i];
        if(sum_so_far<maxEnding_here){
            sum_so_far=maxEnding_here;
        }
        if(maxEnding_here<0){
            maxEnding_here=0;
        }
    }
    return sum_so_far;
}
int main(){
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<subsum(a,n);
}