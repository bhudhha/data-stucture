#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 20;
    int count = 10;
    for (int i = 11; i <= n; i++)
    {
        int num = i;
        int pre_d = num % 10;
        num = num / 10;
        set<int> s;
        s.insert(pre_d);
        bool flag = true;
        while (num)
        {
            int d = num % 10;
            if (s.find(d) != s.end())
            {
                flag = false;
                break;
            }
            s.insert(d);
            num = num / 10;
        }
        if (flag)
        {
            count++;
        }
    }
    cout << count;
}