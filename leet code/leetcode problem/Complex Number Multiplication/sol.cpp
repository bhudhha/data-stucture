#include <bits/stdc++.h>
using namespace std;
string mult(string num1, string num2)
{
    int i;
    string x;
    int temp = 1;
    for (i = 0; i < num1.length(); i++)
    {
        if (num1[i] == '+')
        {
            break;
        }
        if (num1[i] == '-')
        {
            temp = -1;
            continue;
        }
        x.push_back(num1[i]);
    }
    int t1 = stoi(x) * temp;
    x.clear();
    temp = 1;
    for (; i < num1.length() - 1; i++)
    {
        if (num1[i] == '-')
        {
            temp = -1;
            continue;
        }
        x.push_back(num1[i]);
    }
    int t2 = stoi(x) * temp;
    x.clear();
    temp = 1;
    for (i = 0; i < num2.length(); i++)
    {
        if (num2[i] == '+')
        {
            break;
        }
        if (num2[i] == '-')
        {
            temp = -1;
            continue;
        }
        x.push_back(num2[i]);
    }
    int t3 = stoi(x) * temp;
    x.clear();
    temp = 1;
    for (; i < num2.length(); i++)
    {
        if (num2[i] == '-')
        {
            temp = -1;
            continue;
        }
        x.push_back(num2[i]);
    }
    int t4 = stoi(x) * temp;
    int ans = t1 * t3 - t2 * t4;
    string s;
    s += to_string(ans);
    s += "+";
    ans = (t1 * t4 + t2 * t3);
    s += to_string(ans);
    s+='i';
    return s;
}
int main()
{
    string num1 = "1+1i";
    string num2 = "1+1i";
    cout << mult(num1, num2);
}