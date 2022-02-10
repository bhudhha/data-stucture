#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    int res=max(a,b);
    while(1){
        if(res%a==0 && res%b==0){
            return res;
        }
        res++;
    }
    return res;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
}