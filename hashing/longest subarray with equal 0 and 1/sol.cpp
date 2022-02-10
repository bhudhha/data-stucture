#include <bits/stdc++.h>
using namespace std;
int longest(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = -1;
        }
    }
    unordered_map<int,int> m;
    int pre_sum=0;
    int res=0;                                          
    for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(m.find(pre_sum)!=m.end()){
            res=max(res,i-m[pre_sum]);
        }
        if(pre_sum==0){
            res=i+1;
        }
        if(m.find(pre_sum)==m.end()){
            m.insert({pre_sum,i});
        }
    }
    return res;
}
int main()
{
    int a[] = {1, 0, 1, 1, 1, 0, 0};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<longest(a, n);
}
