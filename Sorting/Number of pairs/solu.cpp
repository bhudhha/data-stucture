#include<bits/stdc++.h>
using namespace std;
int  sortAbs(int x[],int y[],int m, int n){
     long long count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(pow(x[i],y[j])>pow(y[j],x[i])){
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int x[] = {2 ,1 ,6};
    int y[] = {1,5};
    
    int m = sizeof(x) / sizeof(x[0]);
    int n = sizeof(y) / sizeof(y[0]);
    sortAbs(x,y,m,n);
}