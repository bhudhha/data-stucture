#include <bits/stdc++.h>
using namespace std;
int toMin(string s)
{
    return s[0] * 600 + s[1] * 60 + s[3] * 10 + s[4];
}
int convert(string current, string correct)
{
    int d = toMin(correct) - toMin(current);
    cout<<d<<" ";
}
int main()
{
    string current = "00:00", correct = "23:59";
    convert(current, correct);
}
