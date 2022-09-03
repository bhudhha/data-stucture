#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int> till; // empty multimap container

    // insert elements in random order
    till.insert(pair<int, int>(1, 40));
    till.insert(pair<int, int>(2, 30));
    till.insert(pair<int, int>(6, 50));
    till.insert(pair<int, int>(6, 10));
    till.insert(pair<int, int>(3, 60));

    for (auto e : till)
    {
        cout << e.first << " " << e.second << "\n";
    }
}