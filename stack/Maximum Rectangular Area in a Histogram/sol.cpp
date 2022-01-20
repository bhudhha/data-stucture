#include <bits/stdc++.h>
using namespace std;
int histrogram(vector<int> arr)
{
    int res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] >= arr[i])
            {
                curr += arr[i];
            }
            else
            {
                break;
            }
        }
        for (int k = i + 1; k < arr.size(); k++)
        {
            if (arr[k] >= arr[i])
            {
                curr += arr[i];
            }
            else
            {
                break;
            }
        }
        res = max(res, curr);
    }
    return res;
}
int main()
{
    vector<int> arr ={6,2,5,4,5,1,6};
    vector<int> arr1 = {7, 2, 8, 9, 1, 3, 6, 5};
    int ans = histrogram(arr);
    int ans1 = histrogram(arr1);
    cout << ans << " "<<ans1;
}