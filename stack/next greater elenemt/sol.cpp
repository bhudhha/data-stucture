#include <bits/stdc++.h>
using namespace std;
vector<int> gnext(int a[], int n)
{
    stack<int> st;
    vector<int> v(n, 0);
    st.push(a[n - 1]);
    v[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.empty() == false && st.top() <= a[i])
        {
            st.pop();
        }
        int next = (st.empty()) ? -1 : st.top();
        v[i] = next;
        st.push(a[i]);
    }
    return v;
}
int main()
{
    int a[] = {5, 15, 10, 8, 6, 12, 9, 18};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> ans = gnext(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}