#include <bits/stdc++.h>
using namespace std;
vector<int> sorted(vector<int> v1, vector<int> v2)
{
    vector<int> v;
    map<int, int> m;
    for (int i = 0; i < v1.size(); i++)
    {
        m[v1[i]]++;
    }
    for (int i = 0; i < v2.size(); i++)
    {
        if (m.find(v2[i]) != m.end())
        {
            while (m[v2[i]] > 0)
            {
                v.push_back(v2[i]);
                m[v2[i]]--;
            }
        }
    }
   for(auto e:m){
       while(e.second>0){
           v.push_back(e.first);
           e.second--;
       }
   }
   return v;
}
int main()
{
    vector<int> v1 = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    vector<int> v2 = {99, 22, 444, 56};
    vector<int> y = sorted(v1, v2);
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}