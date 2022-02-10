#include<bits/stdc++.h>
using namespace std;
int countDigits(int n)
    {
       //Your code here
    if (n/10 == 0)
        return 1;
    return 1 + countDigits(n / 10);
    }
int main(){
    int n=605;
    cout<<countDigits(n);
}