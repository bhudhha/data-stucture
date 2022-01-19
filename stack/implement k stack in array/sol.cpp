#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int *top;
    int *next;
    int cap;
    int k;
    int freetop;
    Stack(int ka, int c)
    {
        cap = c;
        k = ka;
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];
        freetop = 0;
        for (int i = 0; i < k; i++)
        {
            top[i] = -1;
        }
        for (int i = 0; i < cap - 1; i++)
        {
            next[i] = i + 1;
        }
        next[cap - 1] = -1;
    }
    bool isFull() { return freetop == -1; }
    bool isempty(int sn) { return top[sn] == -1; }
    void push(int x, int sn)
    {
        if (isFull())
        {
            cout << "\nstack overflow";
        }
        int i = freetop;
        freetop = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }
    int pop(int sn)
    {
        if (isempty(sn))
        {
            cout << "\nstack underflow";
            return INT_MAX;
        }
        int i = top[sn];
        top[sn] = next[i];
        next[i] = freetop;
        freetop = i;
        return arr[i];
    }
};
int main()
{
    Stack st(3, 6);
    st.push(100, 0);
    st.push(200, 0);
    st.push(300, 0);
    st.push(400, 0);
    st.push(500, 1);
    st.push(600, 1);
    cout << st.pop(0) << " ";
    cout << st.pop(0) << " ";
    st.push(700, 2);

    cout << st.pop(0) << " ";
    cout << st.pop(0) << " ";
    cout << st.pop(1) << " ";
}