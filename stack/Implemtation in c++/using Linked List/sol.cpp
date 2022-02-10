#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct myStack
{
    node *head;
    int size;
    int cap;
    myStack(int c)
    {
        head = NULL;
        size = 0;
        cap = c;
    }
    void push(int x)
    {
        if (cap == size)
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            node *temp = new node(x);
            temp->next = head;
            head = temp;
            size++;
        }
    }
    int pop()
    {

        if (head == NULL)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            int res = head->data;
            node *temp = head;
            head = head->next;
            delete temp;
            size--;
            return res;
        }
        return 0;
    }
    int peak()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty" << endl;
        }

        return head->data;
    }
    int size_stack()
    {
        return size;
    }
    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        return size == 0;
    }
};
void fun1()
{
    myStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << s.size_stack() << endl;
    s.push(60);
    cout << s.peak() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.peak() << endl;
    cout << s.isEmpty() << endl;
}
void fun2()
{
    myStack s(4);
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);
    cout << s.size_stack() << endl;
    s.push(60);
    cout << s.peak() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.peak() << endl;
    cout << s.isEmpty() << endl;
}
int main()
{
    fun1();
    fun2();
}