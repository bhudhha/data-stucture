#include<bits/stdc++.h>
using namespace std;
#define super_fast ios_base::sync_with_stdio(false); cin.tie(NULL)
void init(){
    super_fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
bool isprime(int n){
    if(n==1){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)){
            return false;
        }
    }
    return true;
}
void primeFactor(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}
int main(){
    init();
    int a;
    cin>>a;
    primeFactor(a);
}