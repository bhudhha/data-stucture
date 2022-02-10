#include <bits/stdc++.h>
using namespace std;
int left(string s)
{
    map<char, int> v;
    for (int i = 0; i < s.length(); i++)
    {
        v[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(v[s[i]]==1){
            return i;
        }
    }
    return -1;
}
int main()
{
    string s1 = "adcacbbde";
    cout << left(s1);
}