#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {-2, -1};
    vector<int> nums3 = {-1, 2};
    vector<int> nums4 = {0, 2};
    vector<vector<int>> val;
    val.push_back(nums1);
    val.push_back(nums2);
    val.push_back(nums3);
    val.push_back(nums4);

    for (int i = 0; i < val[0].size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < val.size(); j++)
        {
            sum += val[j][i];
        }
        cout << sum << endl;
    }
}