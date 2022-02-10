#include <bits/stdc++.h>
using namespace std;
bool fun(string s,string l,int i,int n){
    if(i+1==n){
        cout<<s<<" ";
        return 1;
    }
    if(l[i]==1){
     return fun(s,l,i++,n);
    }
    string val=s;
    if(s[i]==')'){
        s[i]='(';
    }else{
        s[i]=')';
    }
    return fun(val,l,i++,n) || fun(s,l,i++,n);
}
int main()
{
    string s = "))()))", locked = "010100";
    int i = 0;
    int n = s.length();
    fun(s, locked, 0,n);
}