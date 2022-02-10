#include <bits/stdc++.h>
using namespace std;
int majority(int a[], int n)
{
    int slow=a[0]+1,fast=a[0]+1;
    do{
        slow=a[slow]+1;
        fast=a[a[fast]+1]+1;
    }while(slow!=fast);
    slow=a[0]+1;
    while(slow!=fast){
        fast=a[fast]+1;
        slow=a[slow]+1;
    }
    return slow-1;
}
int main()
{
    int a[] = {0,2,1,3,2,2};
    int n = sizeof(a) / sizeof(a[0]);
   cout<< majority(a, n);
}