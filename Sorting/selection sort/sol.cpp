#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> val = {64, 25, 12, 22, 11};
    for (int i = 0; i < val.size(); i++)
    {
        int min_val = i;
        for (int j = i + 1; j < val.size(); j++)
        {
            if (val[min_val] > val[j])
            {
                min_val = j;
            }
        }
        swap(val[i], val[min_val]);
    }
    for (int i = 0; i < val.size(); i++)
    {
        cout << val[i] << " ";
    }
}