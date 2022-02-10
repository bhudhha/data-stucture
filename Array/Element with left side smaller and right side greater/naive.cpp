#include <bits/stdc++.h>
using namespace std;
int count(int a[], int n)
{
    bool left = false, right = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] > a[j])
            {
                left=true;
            }else{
                left=false;
            }
        }
        for (int k = i + 1; k < n; k++)
        {
            if (a[i] < a[k])
            {
                right=true;
            }
            else{
                right=false;
            }
        }
        if(left==true && right==true){
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int a[] = {4, 2, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    cout << count(a, n);
}