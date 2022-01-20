#include <bits/stdc++.h>
using namespace std;
int histogram(vector<int> arr)
{
    vector<int> pre(arr.size(), -1);
    vector<int> next(arr.size(), arr.size());
    stack<int> st1;
    stack<int> st2;
    st1.push(0);
    st2.push(arr.size() - 1);
    for (int i = 1; i < arr.size(); i++)
    {
        while (!st1.empty() && arr[i] <= arr[st1.top()])
        {
            st1.pop();
        }
        int s = (st1.empty() ? -1 : st1.top());
        pre[i] = s;
        st1.push(i);
    }
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        while (!st2.empty() && arr[i] <= arr[st2.top()])
        {
            st2.pop();
        }
        int s = (st2.empty() ? arr.size() : st2.top());
        next[i] = s;
        st2.push(i);
    }
    int res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        curr += (i - pre[i] - 1) * arr[i];
        curr += (next[i] - i - 1) * arr[i];
        res = max(res, curr);
    }
    return res;
}
int main()
{
    vector<int> arr = {6, 2, 5, 4, 5, 1, 6};
    int ans = histogram(arr);
    cout<<ans;
}