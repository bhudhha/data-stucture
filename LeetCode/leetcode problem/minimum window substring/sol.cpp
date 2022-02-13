#include <bits/stdc++.h>
using namespace std;
string minWindow(string s, string t)
{
    int m[256] = {0};
    int start;
    int count = 0;
    int ans = INT_MAX;
    for (int i = 0; i < t.length(); i++)
    {
        if (m[t[i]] == 0)
        {
            m[t[i]]++;
            count++;
        }
    }
    int i = 0, j = 0;
    while (j < s.length())
    {
        m[s[j]]--;
        if (m[s[j]] == 0)
        {
            count--;
            
        }
        if(count==0){
            while(count==0){
                if(ans>j-i+1){
                    ans=min(ans,j-i+1);
                    start=i;
                }
            }
            m[s[i]]++;
            if(m[s[i]]>0){
                count++;
            }
            i++;
        }
        j++;
    }

    if(ans!=INT_MAX){
        return s.substr(start,ans); 
    }else{
        return "";
    }
   
}
int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << minWindow(s, t);
}