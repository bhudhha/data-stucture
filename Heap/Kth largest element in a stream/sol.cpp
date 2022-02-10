#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 3, n = 15;
    vector<int> arr = {857, 744, 492, 228, 366, 860, 937, 433, 552, 438, 229, 276, 408, 475, 122};
    priority_queue<int, vector<int>, greater<int>> p;

    for (int j = 0; j < k; j++)
    {
        p.push(arr[j]);
    }
    for (int i = 1; i < k; i++)
    {
        cout << -1 << " ";
    }
    for (int i = k; i < n; i++)
    {
        if (p.top() > arr[i])
        {
            cout << p.top() << " ";
        }
        else
        {
            cout << p.top() << " ";
            p.pop();
            p.push(arr[i]);
        }
    }
    cout << p.top();
}