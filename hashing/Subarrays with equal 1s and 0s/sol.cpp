#include <bits/stdc++.h>
using namespace std;
int numpair(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=-1;
        }
    }
    unordered_map<int,int> v;
    int res=0;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(pre_sum==0){
            res++;
        }
        if(v.find(pre_sum)!=v.end()){
            res+=v[pre_sum];
        }
        v[pre_sum]++;
    }
    return res;
}
int main()
{
    int a[]={1,1,1,1,0};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<numpair(a,n);
}