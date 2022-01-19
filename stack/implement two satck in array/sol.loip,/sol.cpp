#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int front;
    int rear;
    int cap;
    int *arr;

public:
    Stack(int c)
    {
        arr = new int[c];
        cap = c;
        front = -1;
        rear = cap;
    }
    void push1(int d)
    {
        if (front >= rear)
        {
            cout << "both stack is full " << endl;
        }
        front++;
        arr[front] = d;
        return;
    }
    void push2(int d)
    {
        if (front >= rear)
        {
            cout << "Both stack is full " << endl;
        }
        rear--;
        arr[rear] = d;
        return;
    }
    void pop1()
    {
        if (front == -1)
        {
            cout << "stack 1 is empty" << endl;
            return;
        }
        front--;
        return;
    }
    void pop2()
    {
        if (rear == cap)
        {
            cout << "stack 2 is empty" << endl;
            return;
        }
        rear++;
        return;
    }
    int top1()
    {
        if (front == -1)
        {
            cout << "stack 1 is empty" << endl;
            return -1;
        }
        return arr[front];
    }
    int top2()
    {

        if (rear == -1)
        {
            cout << "stack 2 is empty" << endl;
            return -1;
        }
        return arr[rear];
    }
};
int main()
{
    Stack d(12);
    d.push1(2);
    d.push2(3);
    d.push1(4);
    d.push2(5);
    cout << d.top1() << " ";
    d.pop1();
    cout << d.top1() << " ";

    cout << d.top2() << " ";
    d.pop2();
    d.pop2();
    cout << d.top2() << " ";
    return 0;
}