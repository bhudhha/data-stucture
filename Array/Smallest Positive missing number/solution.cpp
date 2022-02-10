#include <bits/stdc++.h>
using namespace std;
class m
{
public:
    int s(int a[], int n)
    {
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 0)
            {
                swap(a[i], a[j]);
                j++;
            }
        }
        return j;
    }
    int r(int a[], int n)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (abs(a[i]) - 1 < n && a[abs(a[i]) - 1] > 0)
            {

                a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
            }
        }
        for(i=0;i<n;i++){
            if(a[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
    int firstmissing(int a[], int n)
    {
        int k = s(a, n);
        return r(a + k, n - k);
    }
};
int main()
{
    m ob;
    int a[] = {0, -10, 1, 3, -20};
    int n = sizeof(a) / sizeof(a[0]);
    cout << ob.firstmissing(a, n);
}