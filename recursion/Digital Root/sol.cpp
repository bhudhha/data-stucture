#include<bits/stdc++.h>
using namespace std;
int root(int n){
if(n/10==0){
    return n;
}
root(n/10);
}
int main(){
    int n=706;
    cout<<root(n);
}