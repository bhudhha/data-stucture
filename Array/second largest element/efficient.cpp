#include <bits/stdc++.h>
using namespace std;
int sec(int arr[], int arr_size)
{
  	int res=-1,largest=0;
    	int i;
    	for( i=1;i<arr_size;i++){
    	    if(arr[i]>arr[largest]){
    	        res=largest;
    	        largest=i;
    	    }else if(arr[i]!=arr[largest]){
    	        if(res==-1 || arr[i]>arr[res]){
    	            res=i;
    	        }
    	    }
    	}
    	if(res>0){
    	return arr[res];
    	}else{
    	    return res;
    	}
}
int main()
{
    int a[] = {1,1,1,1};
    int n = sizeof(a) / sizeof(a[0]);
    int y = sec(a, n);
    cout << y << endl;
}