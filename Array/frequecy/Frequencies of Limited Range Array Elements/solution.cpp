#include<bits/stdc++.h>
using namespace std;
void frequencyCount(vector<int> &arr, int N, int p)
{
    // code here
    int *v= new int(p);
    for(int i=1;i<=p;i++){
    v[i]=count(arr.begin(),arr.end(),i);
    }
    cout<<endl; 
    for(int i=1;i<=p;i++){
        arr[i-1]=v[i];
    }
    delete [] v;
}
int main()
{
    vector<int> arr={3,3,3,3};
    int n=arr.size();
    int p=5;
    frequencyCount(arr,n,p);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}