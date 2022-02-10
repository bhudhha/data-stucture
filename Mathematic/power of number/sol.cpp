#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int findsq(int n,int p){
        if(p==0){
            return 1;
        }
        int temp=findsq(n,p/2);
        temp=temp*temp;
        if(p%2==0){
            return temp;
        }else{
            return temp*n;
        }
    }
};
int main(){
    int n,p;
    cin>>n>>p;
    solution ob;
    cout<<ob.findsq(n,p);
}