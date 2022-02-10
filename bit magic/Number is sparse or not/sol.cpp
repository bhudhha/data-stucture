#include <bits/stdc++.h>
using namespace std;
bool sparse(int n)
{
    int curr =0, prev =n&1;
    while (n > 0)
    {
        n=n/2;
        curr=n&1;
        if(curr==1 && prev==1){
            return false;
        }
        prev=curr;
    }
    return true;
}
int main()
{
    int n = 42;
    cout << sparse(n);
}