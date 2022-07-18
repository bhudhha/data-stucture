#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    set<int> s(arr.begin(),arr.end());
    return (s.size()*(s.size()-1))/2;