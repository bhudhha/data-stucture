#include<bits/stdc++.h>
using namespace std;
void cycle(int a[],int n){
    for(int cs=0;cs<n-1;cs++){
        int item=a[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++){
            if(a[i]<item){
                pos++;
            }
        }
        swap(a[pos],item);
        while(pos!=cs){
            pos=cs;
            for(int i=cs+1;i<n;i++){
                if(a[i]<item){
                    pos++;
                }
            }
            swap(a[pos],item);
        }
    }
}
int main(){
    int a[]={1,3,2,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cycle(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}