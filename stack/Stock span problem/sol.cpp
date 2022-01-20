#include <bits/stdc++.h>
using namespace std;
vector<int> span(vector<int> arr)
{
    stack<int> st;
    st.push(0);
    vector<int> ans;
    ans.push_back(1);
    for (int i = 1; i < arr.size(); i++)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        int span = st.empty() ? i + 1 : i - st.top();
        ans.push_back(span);
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int> a = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = span(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}