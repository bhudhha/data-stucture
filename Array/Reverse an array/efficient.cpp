#include<bits/stdc++.h>
using namespace std;
string rev(string str){
  int start=0;
  int last =str.length()-1;
  while(start<last){
      char temp=str[start];
      str[start]=str[last];
      str[last]=temp;
      start++;
      last--;
  }
return str;
}
int main(){
    string a="rahul";
    string y=rev(a);
    for(int i=0;i<y.length();i++){
        cout<<y[i]<<" ";
    }
}