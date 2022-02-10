#include <bits/stdc++.h>
using namespace std;
int occr(int l[], int r[], int n,int maxx)
{
    int a[maxx];
    memset(a, 0, sizeof(a));
    for(int i=0;i<n;i++){
        a[l[i]]++;
        a[r[i]+1]--;
    }
    for (int i = 0; i < maxx; i++)
    {
        cout <<i<< "->"<<a[i] <<endl;
    }
    int maxxi=a[0],res=0;
    for(int i=1;i<maxx;i++){
        a[i]+=a[i-1];
        if(maxxi<a[i]){
            maxxi=a[i];
            res=i;
        }

    }
    cout<<endl;
     for (int i = 0; i < maxx; i++)
    {
        cout <<i<< "->"<<a[i] <<endl;
    }
    return res;
}
int main()
{
    int l[] = {1,4,3,1};
    int r[] = {15,8,5,4};
    int n = sizeof(l) / sizeof(l[0]);
    int maxx=16;
    cout<<occr(l, r, n,maxx);
}