#include <bits/stdc++.h>
using namespace std;
int subarray(int a[], int n, int sum)
{
    unordered_map<int,int> m;
    int pre_sum = 0;
    int res = 0;
    for(int i=0;i<n;i++){
        pre_sum+=a[i];
        if(pre_sum==sum){
            res=i+1;
        }
        if(m.find(pre_sum-sum)!=m.end()){
            res=max(res,i-m[pre_sum-sum]);
        }if(m.find(pre_sum)==m.end()){
            m.insert({pre_sum,i});
        }
    }
    return res;
}
int main()
{
    int a[] = {5, 8, 6, 13, 3, -1};
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 22;
    cout << subarray(a, n, sum);
}