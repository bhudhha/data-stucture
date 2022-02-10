#include <bits/stdc++.h>
using namespace std;
int uin(int a[], int n, int b[], int m)
{
    unordered_set<int> s(a,a+n);
    for(int i=0;i<m;i++){
        if(s.find(b[i])!=s.end()){
            continue;
        }else{
            s.insert(b[i]);
        }
    }
    return s.size();
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    cout << uin(a, n, b, m);
}
