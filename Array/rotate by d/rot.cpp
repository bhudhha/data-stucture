#include <bits/stdc++.h>
using namespace std;
class rot
{
public:
    void dif(int arr[], int n,int k)
    {
         rotate(arr, arr + (k % n), arr + n);
    }
};
int main()
{
    class rot x;
    int a[] ={ 1, 3, 5, 7, 9 };
    int n = sizeof(a) / sizeof(a[0]);
    int d=2;
    x.dif(a, n,d);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}