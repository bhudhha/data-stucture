#include <bits/stdc++.h>
using namespace std;
bool fun(vector<int> arr, int n, int sum)
{
    if (n == 0)
    {
        return sum == 0 ? 1 : 0;
    }
    return fun(arr, n - 1, sum - arr[n - 1]) + fun(arr, n - 1, sum);
}
int main()
{
    vector<int> arr = {3,
                       34,
                       4,
                       12,
                       5,
                       2};
    int sum = 9;
    int n = arr.size();
    cout
        << fun(arr, n, sum);
}