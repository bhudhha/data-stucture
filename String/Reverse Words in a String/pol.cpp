#include <bits/stdc++.h>
using namespace std;
class parent
{
public:
    parent()
    {
    }
    void move()
    {
        cout << "parent move";
    }
};
class child : public parent
{
public:
    child()
    {
    }
    void move()
    {
        cout << "Child move";
    }
};
int main()
{
    parent m = new child();
    ;
    m.move();
    m =
}