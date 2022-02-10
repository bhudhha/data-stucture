#include <bits/stdc++.h>
using namespace std;
void reform(int a[], int n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count0++;
        }
        if (a[i] == 1)
        {
            count1++;
        }
        if (a[i] == 2)
        {
            count2++;
        }
    }
    //   cout<<count0<<count1<<count2<<endl;
    for(int i=0;i<count0;i++){
        a[i]=0;
    }
    for(int i=count0;i<(count0+count1);i++){
        a[i]=1;
    }
    for(int i=(count0+count1);i<(count0+count1+count2);i++){
        a[i]=2;
    }
}
int main()
{
    int a[] = {0, 1, 2, 2, 1,0,2,2,2,1, 0};
    int n = sizeof(a) / sizeof(a[0]);
    reform(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}