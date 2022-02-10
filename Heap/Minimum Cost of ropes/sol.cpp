#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[] = {4, 3, 2, 6};
    long long n = sizeof(arr) / sizeof(arr[0]);
    long long ans = 0;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (long long i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    while (pq.size() > 1)
    {
        int r1 = pq.top();
        pq.pop();
        int r2 = pq.top();
        pq.pop();
        int res = r1 + r2;

        pq.push(res);
        ans += res;
    }
    cout << ans;
}