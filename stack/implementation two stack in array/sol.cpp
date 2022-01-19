#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int cap;
    int *arr;
    int top;

public:
    Stack(int cap)
    {
        arr = new int[cap];
        top = -1;
    }
    void push(int data)
    {
        if(top==cap){
            cout<<"full";
            return ;
        }
        top++;
        arr[top] = data;
    }
    void pop()
    {
        if(top==-1){
            cout<<"empty";
            return ;
        }
        top--;
    }
    int front(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }

};
int main()
{
    Stack d(4);
    d.push(2);
    cout<<d.front()<<" ";
    d.pop();
    d.pop();
}