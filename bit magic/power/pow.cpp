#include<bits/stdc++.h>
using namespace std;
bool pow(long long int n){
    if(n==0){
        return false;
    }
    return ((n&(n-1))==0);
}
int main(){
   long long int n;
    cin>>n;
    if(pow(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}