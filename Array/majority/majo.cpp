#include <bits/stdc++.h>
using namespace std;
int freq(int a[], int n, int x, int y)
{
    int xcount = 0, ycount = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            xcount++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == y)
        {
            ycount++;
        }
    }
    if(xcount==ycount){
        if(x<y){
            return x;
        }
        else{
            return y;
        }
    } else if (xcount>ycount){
        return x;
    }else{
       return y;
    }
}
int main()
{
    int a[] =  {1,2,3,4,5,6,7};
    int n = sizeof(a) / sizeof(a[0]);
    int x, y;
    cin >> x >> y;
    cout << freq(a, n, x, y);
}