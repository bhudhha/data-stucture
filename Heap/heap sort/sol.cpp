#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void heapify(int arr[], int n, int i)
    {
        int largest = i, left = 2 * i + 1, right = 2 * i + 2;
        if (left < n && arr[largest] < arr[left])
        {
            largest = left;
        }
        if (right < n && arr[largest] < arr[right])
        {
            largest = right;
        }
        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
    void buildHeap(int arr[], int n)
    {

        for (int i = (n - 1) / 2; i >= 0; i--)
        {
            heapify(arr, n, i);
        }
    }
    void heapSort(int arr[], int n)
    {
        buildHeap(arr, n);
        for (int i = n - 1; i >= 1; i--)
        {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
};
int main()
{
    Solution s;
    int a[] = {23, 43, 3, 6, 677, 34, 63};
    int n = sizeof(a) / sizeof(a[0]);
    s.heapSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}