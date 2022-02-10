#include <bits/stdc++.h>
using namespace std;
int del(vector<int> v)
{
    int i = 0;
    int count = 0;
    for (int j = 1; j < v.size(); j++)
    {
        if (v[i] < v[j])
        {
            i = j;
        }
        else
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> v =  {30, 40, 2, 5, 1, 7, 45, 50, 8};
    cout<<del(v);
}