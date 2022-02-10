#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}
int main(){
    string s1="listen";
    string s2="silent";
    cout<<isAnagram(s1,s2);
}