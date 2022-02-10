#include <bits/stdc++.h>
using namespace std;
void rot(vector<long long>& a, int n, int k)
{
    int i;
    int front=0;
    int end=0;
    for (i = 0; i < n / k; i++)
    {
        front = i * k;
        end = (i + 1) * k;
        reverse(a.begin() + front, a.begin() + end);
    }
    reverse(a.begin() + end, a.begin() + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    vector<long long> v= {35 ,56 ,48 ,21 ,87};

    // int n = sizeof(a) / sizeof(a[0]);
    int n=v.size();
    int k = 77;
    rot(v, n, k);
}