#include <bits/stdc++.h>
using namespace std;
void insert(int a[], int n, int x)
{
    n++;
    cout << n<<endl;
    a[n - 1] = x;
    cout<<a[n-1]<<endl;

}
int main()
{
    int a[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int y = 20;
    insert(a, n, y);
    for (int i = 0; i < n+1; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    cout<<a[n-1];
}