#include <bits/stdc++.h>
using namespace std;
void pregreater(int a[], int n)
{
    stack<int> st;
    st.push(a[0]);
    cout << -1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (st.empty() == false && st.top() <= a[i])
        {
            st.pop();
        }
        int p = (st.empty())?-1:st.top();
        cout << p << " ";
        st.push(a[i]);
    }
}
int main()
{
    int a[] = {20,30,10,5,15};
    int n = sizeof(a) / sizeof(a[0]);
    pregreater(a, n);
}