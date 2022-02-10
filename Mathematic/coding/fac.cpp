#include <bits/stdc++.h>
using namespace std;
vector<int> fac(int n)
{
    vector<int> v;
    v.push_back(1);
    int i = 2;
    int it = 0;
    int carry = 0;
    while (i <= n)
    {
        for (it = 0; it < v.size(); it++)
        {
            int mut = v[it] * i + carry;
            int num = mut % 10;
            v[it] = num;
            carry = mut / 10;
        }
        while (carry > 0)
        {
            int ex_carry = carry % 10;
            v.push_back(ex_carry);
            carry = carry / 10;
        }
        it=0;
        i++;
    }
    reverse(v.begin(),v.end());
    return v;
}
int main()
{
    int n;
    cout<<"enter"<<endl;
    cin>>n;
    vector<int> res = fac(n);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
}