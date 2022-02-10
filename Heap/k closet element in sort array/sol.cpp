#include <bits/stdc++.h>
using namespace std;
int findcross(vector<int> arr, int low, int high, int x)
{
    if (arr[low] > x)
    {
        return low;
    }
    if (arr[high] <= x)
    {
        return high;
    }
    int mid = (low + high) / 2;
    if (arr[mid] <= x && arr[mid + 1] > x)
    {
        return mid;
    }
    if (arr[mid] < x)
    {
        return findcross(arr, mid + 1, high, x);
    }
    return findcross(arr, low, mid - 1, x);
}
vector<int> kCloset(vector<int> arr, int k, int x)
{
    vector<int> ans;
    int n = arr.size();
    int l = findcross(arr, 0, arr.size() - 1, x);
    int r = l + 1;
    if (arr[l] == x)
    {
        l--;
    }
    int count = 0;
    while (l >= 0 && r < n && count < k)
    {
        if (x - arr[l] < arr[r] - x)
        {
            ans.push_back(arr[l--]);
        }
        else
        {
            ans.push_back(arr[r++]);
        }
        count++;
    }
    while (l >= 0 && count < k)
    {
        ans.push_back(arr[l--]);
    }
    while (r < n && count < k)
    {
        ans.push_back(arr[r++]);
    }
    return ans;
}
int main()
{
    vector<int> v = {12, 16, 22, 30, 35, 39, 42,
                     45, 48, 50, 53, 55, 56};
    vector<int> ans = kCloset(v, 4, 35);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}