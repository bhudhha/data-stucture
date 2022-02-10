#include <bits/stdc++.h>
using namespace std;
void sortAbs(int a[], int n, int k)
{
    multimap<int,int> m;
    multimap<int,int>::iterator it;
    for(int i=0;i<n;i++){
        m.insert(make_pair(abs(a[i]-k),a[i]));
    }
    int i=0;
    for(it =m.begin();it!=m.end();it++){
        a[i++]=(*it).second;
    }
}
int main()
{
    int a[] = {10, 5, 3, 9, 2};
    int k = 7;
    int n = sizeof(a) / sizeof(a[0]);
    sortAbs(a, n, k);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}