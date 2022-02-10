#include <bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> v, int target)
{
    map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (m.find(target - v[i]) != m.end())
        {
            ans.push_back(m[target-v[i]]);
            ans.push_back(i);
        }else{
            m[v[i]]=i;
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
   vector<int>y= twosum(v, target);
   for(int i=0;i<y.size();i++){
       cout<<y[i]<<" ";
   }
}
