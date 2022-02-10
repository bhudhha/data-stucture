#include <bits/stdc++.h>
using namespace std;
 void inset(int arr[], int sizeOfArray, int index, int element)
{
    if(index==(sizeOfArray-1)){
            arr[sizeOfArray-1]=element;
        }
        for(int i=sizeOfArray-2;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n=6;
    int y=20;
    inset(a, n , 2, y);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}