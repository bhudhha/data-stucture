#include <bits/stdc++.h>
using namespace std;
struct mystack
{
    vector<int> v;
    int size;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peak()
    {
        return v.back();
    }
    int size1()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.size() == 0;
    }
};
int main()
{
    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.peak() << endl;
    cout << s.size1() << endl;
    s.pop();
    cout << s.peak() << endl;
    cout << s.size1() << endl;
    cout << s.isEmpty() << endl;
}