#include <bits/stdc++.h>
using namespace std;
class myclass
{
public:
    vector<int> unon(int a[], int b[], int n, int m)
    {
        vector<int> v;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if(a[i]<b[j]){
                v.push_back(a[i++]);
            }else if(a[i]>b[j]){
                v.push_back(b[j++]);
            }else{
                v.push_back(a[i]);
                i++;
                j++;
            }

        }
        while(i<n){
            v.push_back(a[i++]);
        }
        while(j<m){
            v.push_back(b[j++]);
        }
        return v;
    }
};
int main()
{
    myclass ob;
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int b[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    vector<int> y = ob.unon(a, b, n, m);
    for(int i=0;i<y.size();i++){
        cout<<y[i]<<" ";
    }
}