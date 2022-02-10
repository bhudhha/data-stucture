#include <bits/stdc++.h>
using namespace std;
void three(vector<int> &v, int a, int b)
{
    int low = 0;
    int high = v.size() - 1;
    int mid = 0;
    while (mid <=high)
    {
        if (v[mid] < a)
        {
            swap(v[mid], v[low]);
            mid++;
            low++;
        }
        else if (v[mid] > b)
        {
            swap(v[mid], v[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}
int main()
{
    vector<int> v = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int a = 20, b = 20;
    three(v, a, b);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}