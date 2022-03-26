// C++ program for sum of the
// series 5 + 55 + 555.....n
#include <bits/stdc++.h>
using namespace std;

// function which return the
// the sum of series
int sumOfSeries(int n)
{
   int ans= 0.6172 *
                    (pow(10, n) - 1) -
                0.55 * n;
                cout<<ans;
                return ans;
}

// Driver code
int main()
{
    int n = 2;
    cout << sumOfSeries(n);
    return 0;
}
