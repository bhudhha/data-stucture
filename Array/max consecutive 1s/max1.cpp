#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {0, 1, 1, 1, 0, 1, 1, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int count = 0;
    int res = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if(a[i]==0){
            count=0;
        }else{
            count++;
            res=max(res,count);
        }
    }
    cout<<"result "<<res;
}