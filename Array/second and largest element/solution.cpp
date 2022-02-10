#include <bits/stdc++.h>
using namespace std;
vector<int> s_l(int a[], int n)
{
    vector<int> v;
    int res = 0, sres = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[res] < a[i])
        {
            sres = res;
            res=i;
        }
        else if(a[i]!=a[res])
        {
            if (res == -1 || a[sres] < a[i])
            {
                sres = i;
            }
        }
    }
    v.push_back(a[res]);
    if(sres==-1){
        v.push_back(sres)
    }else{
    v.push_back(a[sres]);
    }
    return v;
}
int main()
{
    int a[] = {2,2,2};

    int n = sizeof(a) / sizeof(a[0]);
    vector<int> y = s_l(a, n);
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}