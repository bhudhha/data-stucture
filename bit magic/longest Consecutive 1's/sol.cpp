#include <bits/stdc++.h>
using namespace std;
int lon(int n)
{
    int curlen = 0, maxlen = INT_MIN;
    int curr = 0, prev = 1 & n;
    while(n > 0)
    {
        n = n / 2;
        curr=1&n;
        if(curr==1 && prev==1){
            curlen++;
        }else{
            curlen=0;
        }
        maxlen=max(maxlen,curlen);
        prev=curr;
    }
    return maxlen+1;
}
int main()
{
    int n = 222;
    cout << lon(n);
}