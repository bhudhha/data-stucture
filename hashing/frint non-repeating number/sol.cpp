#include <bits/stdc++.h>
using namespace std;
vector<int> pnon(int a[], int n)
{
    map<int ,int> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for(auto e:m){
        cout<<e.first<<" ";
        if(e.second==1){
            v.push_back(e.first);
        }
    }
    return v;
}
int main()
{
    int a[] = {1, 1, 2, 2, 3, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> y = pnon(a, n);
    cout<<endl;
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}