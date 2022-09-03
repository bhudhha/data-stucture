#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int front;
    int back;
    int cap;
    Stack(int c)
    {
        cap = c;
        front = -1;
        back = cap;
        arr = new int[cap];
    }
    void push1(int x)
    {
        if (front >= back)
        {
            cout << "Both Stack is Full\n";
            return;
        }
        front++;
        arr[front] = x;
        return;
    }
    void push2(int x)
    {
        if (front >= back)
        {
            cout << "Both Stack is Full\n";
            return;
        }
        back--;
        arr[back] = x;
        return;
    }
    void pop1()
    {
        if (front == -1)
        {
            cout << "Stack is Empty\n";
            return;
        }
        front--;
        return;
    }
    void pop2()
    {
        if (back == cap)
        {
            cout << "Stack is Empty\n";
            return;
        }
        back++;
        return;
    }
    int top1()
    {
        if (front == -1)
        {
            cout << "Stack one is Empty\n";
            return -1;
        }
        return arr[front];
    }
    int top2()
    {
        if (back == cap)
        {
            cout << "Stack two is Empty";
            return -1;
        }
        return arr[back];
    }
    int size1()
    {
        return front != -1 ? front : 0;
    }
    int size2()
    {
        return back != cap ? back : 0;
    }
    bool isEmpty1()
    {
        return front == -1;
    }
    bool isEmpty2()
    {
        return back == cap;
    }
};
int main()
{
    Stack s(6);
    s.push1(2);
    s.push1(4);
    s.push1(6);
    s.push1(8);
    s.push2(4);
    s.push2(2);
    s.pop1();
    s.pop2();
    cout << s.top1() << endl;
    cout << s.top2() << endl;
}