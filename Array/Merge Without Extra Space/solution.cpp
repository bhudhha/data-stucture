#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int n1, int n2)
{
    int n=n1+n2;
    int gap=n/2;
    int i=0,j=i+gap;
    //both i &j  in first array
    while(j<n1){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
        i++;
        j++;
    }
    // one in a and another in b

    while(i<n1 && j<n2){

    }
}
int main()
{
    int a[] = {1, 3, 5, 7};
    int b[] = {0, 2, 6, 8, 9};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    merge(a, b, n1, n2);
    for(int i=0;i<n1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n2;i++){
        cout<<b[i]<<" ";
    }
}