#include <bits/stdc++.h>
using namespace std;
void merge(int low, int mid, int high, vector<int> &arr)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i + low];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + i + 1];
    }
    int i = 0,
        j = 0,
        k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
}
void mergesort(int i, int r, vector<int> &arr)
{
    if (i < r)
    {
        int m = i + (r - i) / 2;
        mergesort(i, m, arr);
        mergesort(m + 1, r, arr);
        merge(i, m, r, arr);
    }
}
int main()
{
    vector<int> arr = {5, 1, 1, 2, 0, 0};
    int i = 0, r = arr.size() - 1;
    mergesort(i, r, arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}