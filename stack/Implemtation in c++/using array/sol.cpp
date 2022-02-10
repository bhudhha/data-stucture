#include <bits/stdc++.h>
using namespace std;
struct myStack
{
    int *arr;
    int cap;
    int top;
    myStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Stack is full" << endl;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peak()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    int size_stack()
    {
        return top + 1;
    }
};
int main()
{
    myStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.size_stack() << endl;
    cout << s.peak() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    cout << s.size_stack() << endl;
    cout << s.peak() << endl;
    cout << s.isEmpty() << endl;
}