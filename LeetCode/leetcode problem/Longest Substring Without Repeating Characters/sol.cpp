#include <bits/stdc++.h>
using namespace std;
int longstr(string s)
{
  unordered_map<char,int> m;
        int start=0,end=0;
        int len=INT_MIN;
        while(end<s.size()){
            m[s[end]]++;
            end++;
            if(m.size()==end-start){
                len=max(len,end-start);
            }
            while(m.size()<end-start){
                m[s[start]]--;
                if(m[s[start]]==0){
                    m.erase(s[start]);
                }
                start++;
            }
        }
        return len==INT_MIN?0:len;
}
int main()
{
    string s = "dvdf";
    int ans = longstr(s);
    cout << ans;
}