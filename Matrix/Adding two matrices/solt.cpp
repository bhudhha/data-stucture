#include <bits/stdc++.h>
using namespace std;
const int R = 3;
const int C = 3;
void add(int a[R][C],int b[R][C]){
    int output[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            output[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int a[R][C] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int b[R][C] = {{1, 1, 1},
                   {1, 1, 1},
                   {1, 1, 1}};
                   add(a,b);
}