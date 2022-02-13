#include <bits/stdc++.h>
using namespace std;
int maxx(vector<int> nums1, vector<int> nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    reverse(nums2.begin(), nums2.end());
    int ans = 0;
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(nums2.begin(), nums2.end(), nums1[i]);
        pos = m - distance(nums2.begin(), it) - 1;
        cout << pos << endl;
        if (pos != -1 and i <= pos)
            ans = max(ans, pos - i);
    }
    return ans;
}
int main()
{
    vector<int> nums1 = {2, 2, 2};
    vector<int> nums2 = {10, 10, 1};
    cout << endl;
    cout << maxx(nums1, nums2);
}