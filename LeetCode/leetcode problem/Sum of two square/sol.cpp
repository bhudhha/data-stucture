#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin>>c;
    set<int> v;
    for(int i=0;i*i<=c;i++){
        v.insert(i*i);
        if(v.find(c-i*i)!=v.end()){
            cout<<sqrt(c-i*i)<<"^2"<<i<<"^2";
            cout<<"true";
        }
    }
    cout<<"false";
}