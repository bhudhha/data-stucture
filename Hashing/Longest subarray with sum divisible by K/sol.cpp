#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int> m;
	    int res=0,pre_sum=0;
	    for(int i=0;i<n;i++){
	        pre_sum+=arr[i];
	        int rem=((pre_sum%k)+k)%k;
	        if(rem==0){
	            res=i+1;
	        }
	       if(m.find(rem)==m.end()){
	            m.insert({rem,i});
	        }
	        if(m.find(rem)!=m.end()){
	            res=max(res,i-m[rem]);
	        }
	    }
	    return res;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends