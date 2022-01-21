#include <bits/stdc++.h>
using namespace std;
class Heap
{
public:
    int cap;
    int size;
    int *arr;
    Heap(int c)
    {
        size = 0;
        cap = c;
        arr = new int[cap];
    }
    int left(int i)
    {
        return (2 * i + 1);
    }
    int right(int i)
    {
        return (2 * i + 2);
    }
    int parent(int i)
    {
        return ((i - 1) / 2);
    }
    void insert(int x)
    {
        if (cap == size)
        {
            return;
        }
        size++;
        arr[size - 1] = x;

        for (int i = size - 1; i != 0 && arr[i] < arr[parent(i)];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void minheapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if (l < size && arr[i] > arr[l])
        {
            smallest = l;
        }
        if (r < size && arr[i] > arr[r])
        {
            smallest = r;
        }
        if (smallest != i)
        {
            swap(arr[smallest], arr[i]);
            minheapify(smallest);
        }
    }
    int top()
    {
        if (size == 0)
        {
            return INT_MAX;
        }
        if (size == 1)
        {
            size--;
            return arr[0];
        }
        swap(arr[size - 1], arr[0]);
        size--;
        minheapify(0);
        return arr[size];
    }
    void deleting(int i)
    {
        arr[i] = INT_MIN;
        top();
        return;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Heap h(6);
    h.insert(7);
    h.insert(3);
    h.insert(6);
    h.insert(1);
    cout << h.top();
}