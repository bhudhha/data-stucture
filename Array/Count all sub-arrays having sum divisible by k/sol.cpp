// Let there be a subarray (i, j) whose sum is divisible by k
//   sum(i, j) = sum(0, j) - sum(0, i-1)
// Sum for any subarray can be written as q*k + rem where q
// is a quotient and rem is remainder
// Thus,
//     sum(i, j) = (q1 * k + rem1) - (q2 * k + rem2)
//     sum(i, j) = (q1 - q2)k + rem1-rem2

// We see, for sum(i, j) i.e. for sum of any subarray to be
// divisible by k, the RHS should also be divisible by k.
// (q1 - q2)k is obviously divisible by k, for (rem1-rem2) to
// follow the same, rem1 = rem2 where
//     rem1 = Sum of subarray (0, j) % k
//     rem2 = Sum of subarray (0, i-1) % k

// 1 Make an auxiliary array of size k as Mod[k] . This array holds the count of each remainder we are getting after dividing cumulative sum till any index in arr[].
// 2 Now start calculating cumulative sum and simultaneously take it’s mod with K, whichever remainder we get increment count by 1 for remainder as index in Mod[] auxiliary array. Sub-array by each pair of positions with same value of ( cumSum % k) constitute a continuous range whose sum is divisible by K.
// 3 Now traverse Mod[] auxiliary array, for any Mod[i] > 1 we can choose any two pair of indices for sub-array by (Mod[i]*(Mod[i] – 1))/2 number of ways . Do the same for all remainders < k and sum up the result that will be the number all possible sub-arrays divisible by K.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {4, 5, 0, -2, -3, 1};
    int k = 5;
    vector<int> mod(k, 0);
    int pre_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        pre_sum += arr[i];
        mod[((pre_sum) % k + k) % k]++;
    }
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        if (mod[i] > 1)
            res += (mod[i] * (mod[i] - 1)) / 2;
    }
    res += mod[0];
    cout << res;
}