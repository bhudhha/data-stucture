#include <bits/stdc++.h>
using namespace std;
void cyclesort(int arr[], int n)
{
    int writes = 0;
    for (int cs = 0; cs <= n - 2; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
        {
            if (arr[i] < item)
            {
                pos++;
            }
        }
        if (pos == cs)
        {
            continue;
        }
        while (item == arr[pos])
        {
            pos += 1;
        }
        if (pos != cs)
        {
            swap(arr[pos], item);
            writes++;
        }
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
            {
                if (arr[i] < item)
                {
                    pos += 1;
                }
            }
            while (item == arr[pos])
            {
                pos += 1;
            }
            if (item != arr[pos])
            {
                swap(arr[pos], item);
                writes++;
            }
        }
    }
}
int main()
{
    int arr[] = {1, 8, 3, 9, 10, 10, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cyclesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}