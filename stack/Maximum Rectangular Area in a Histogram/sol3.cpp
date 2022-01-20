#include <bits/stdc++.h>
using namespace std;
int his(vector<int> arr)
{
    int res = 0;
    stack<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            int tp = st.top();
            st.pop();
            int curr = arr[tp] * (st.empty() ? i : i - st.top() - 1);
            res = max(res, curr);
        }
        st.push(i);
    }
    
    while (!st.empty())
    {
        int tp = st.top();
        st.pop();
        int curr = arr[tp] * (st.empty() ? arr.size() : arr.size() - st.top()-1 );
        res = max(res, curr);
    }
    return res;
}
int main()
{
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    int ans = his(arr);
    cout<<ans;
}