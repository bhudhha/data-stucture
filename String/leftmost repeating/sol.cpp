#include <bits/stdc++.h>
using namespace std;
char left(string s)
{
    map<char, int> v;
    // char r = '$';
    for (int i = 0; i < s.length(); i++)
    {
        v[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (v[s[i]] == 1)
        {
            return s[i];
        }
    }
    return '$';
}
int main()
{
    string s1 = "tkjprepggxrpnrvystmwcysyycqpevikeffmznimkkasvwsrenzkycxfxtlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipyamyehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdknlyjyhfixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrcddiuteiojwayyzpvscmpsajlfvgubfaaovlzylntrkdcpwsrtesjwhdizcobzcnfwlqijtvdwvxhrcbldvgylwgbusbmborxtlhcsmpxohgmgnkeufdxotogbgxpeyanfetcukepzshkljugggekjdqzjenpevqgxiepjsrdzjazujllchhbfqmkimwzobiwybxduunfsksrsrtekmqdcyzjeeuhmsrqcozijipfioneeddpszrnavymmtatbdzqsoemuvnpppsuacbazuxmhecthlegrpunkdmbppweqtg";
    char ans = left(s1);
    if (ans != '$')
    {
        cout << ans;
    }
    else
    {
        cout << -1;
    }
}