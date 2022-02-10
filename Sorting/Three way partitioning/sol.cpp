#include <bits/stdc++.h>
using namespace std;
void threeWay(int a[],int n,int l,int h){
    int low=0;
    int lowp=0;
    int highp=n-1;
    int high=n-1;
    while(lowp<highp){
       if(a[lowp]<l && a[highp]<l){
          
       }
    }

}
int main()
{
    int a[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32} ;
    int n = sizeof(a) / sizeof(a[0]);
    int l = 20, h = 20;
    threeWay(a, n, l, h);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}