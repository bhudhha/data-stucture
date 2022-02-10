#include <bits/stdc++.h>
using namespace std;
void freq(int a[], int n)
{
    int freq = 0;
    int i = 0;
    int d=2;
    while (i < n)
    {
       if(a[i]==d){
           freq++;
       }
       i++;
    }
   
    cout<<freq;
}
int main()
{
    int a[] = {1,1,1,2,2,2,2,2};
    int n = sizeof(a) / sizeof(a[0]);
    freq(a, n);
}