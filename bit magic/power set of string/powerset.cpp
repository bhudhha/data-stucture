#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abc";
    int n=s.length();
    int total=(1<<n);
for(int i=0;i<total;i++){
   cout<<"'";
    for(int j=0;j<n;j++){
        if((i&(1<<j))!=0){
            cout<<s[j];
        }
    }
    cout<<"'";
    cout<<"\n";
}
}