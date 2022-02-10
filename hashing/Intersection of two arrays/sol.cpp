#include <bits/stdc++.h>
using namespace std;
int inter(int a[], int b[], int n, int m)
{
   int res=0;
   unordered_set<int> s(a,a+n);
   for(int i=0;i<m;i++){
       if(s.find(b[i])!=s.end()){
           s.erase(b[i]);
           res++;
       }
   }
   return res;
}
int main()
{
    int a[] = {};
    int b[] = {};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(a) / sizeof(a[0]);
    cout << inter(a, b, n, m);
}