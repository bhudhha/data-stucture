#include <bits/stdc++.h>
using namespace std;
int uin(vector<int> a, int n, vector<int> b)
{
    unordered_map<int,int> s;
    for (int i = 0; i < n; i++)
    {
        s[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(b[i]) == s.end())
        {
            return false;
          
        }
        if(s[b[i]]==0){
            return false;
        }
        s[b[i]]--;
    }
  return true;
}
int main()
{
    vector<int> a = {20,6,17,15,9};
    vector<int> b = {6,17,20,19,19};
    cout << uin(a, a.size(), b);
}
