#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int cap;
    Stack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int a)
    {
        if (top == cap - 1)
        {
            cout << "Satck is Full\n";
            return ;
        }
        top++;
        arr[top] = a;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return ;
        }
        int x = arr[top];
        top--;
    }
    int peak()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        int x = arr[top];
        return x;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Stack s(5);
    s.push(4);
    s.push(3);
    s.pop();
    s.pop();
    cout <<s.peak();
    cout<<s.isEmpty();
}