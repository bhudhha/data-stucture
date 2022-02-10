#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "cbaebabacd", p = "abc";
    vector<int> window(26, 0);
    vector<int> p_vec(26, 0);
    vector<int> ans;
    for (int i = 0; i < p.length(); i++)
    {
        p_vec[p[i] - 'a']++;
        window[p[i] - 'a']++;
    }
    if (window == p_vec)
    {
        ans.push_back(0);
    }
    for(int i=p.length();i<s.length();i++){
        window[s[i-p.length()]-'a']--;
        window[s[i]-'a']++;
        if(p_vec==window){
         ans.push_back(i-p.length()+1);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}