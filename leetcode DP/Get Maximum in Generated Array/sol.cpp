#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int nums[n + 1];
    nums[0] = 0;
    nums[1] = 1;
    for (int i = 1; 2 * i + 1 <= n && 2 * i <= n; i++)
    {
        nums[2 * i] = nums[i];
        nums[2 * i + 1] = nums[i] + nums[i + 1];
    }
    int ans = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        if (ans < nums[i])
        {
            ans = nums[i];
        }
    }
    cout<<ans;
}