#include <bits/stdc++.h>
using namespace std;
vector<int> next(vector<int> arr){
    stack<int> st;
    st.push(arr[arr.size()-1]);
    vector<int> ans;
    ans.push_back(-1);
    for(int i=arr.size()-2;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        int s=st.empty()?-1:st.top();
        ans.push_back(s);
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    vector<int> a = {1, 3, 2, 4};
    vector<int> ans = next(a);
    for (int i = 0; i < ans.size(); i++)
    {
      cout<<ans[i]<<" ";
    }
}