
#include <bits/stdc++.h>
using namespace std;
void print(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
vector<int> findMedian(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    priority_queue<int> s;
    priority_queue<int, vector<int>, greater<int>> g;
    s.push(arr[0]);
    ans.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        if (s.size() > g.size())
        {
            if (x < s.top())
            {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else
            {
                g.push(x);
            }
            ans.push_back((float(s.top() + g.top()) / 2.0));
        }
        else
        {
            if (x > g.top())
            {
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            else
            {
                s.push(x);
            }
            ans.push_back(s.top());
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {25, 7, 10, 15, 20};
    vector<int> ans = findMedian(arr);
    print(ans);
}