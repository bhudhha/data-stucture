#include <bits/stdc++.h>
using namespace std;
#define RANGE 255
string countsort(string str)
{
    int count[RANGE + 1];
    for (int i = 0; i <=RANGE; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]-'a']++;
    }
    for (int i = 1; i <=RANGE; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    char output[str.length()];
    for (int i = 0; i < str.length(); i++)
    {
        output[count[str[i]] - 1] = str[i]+'a';
    }
   cout<<output;
}
int main()
{
    string str = "geeksforgeeks";
    cout<<countsort(str);
   
}