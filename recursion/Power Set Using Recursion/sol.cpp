//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++
void powerSetUtil(string &str, vector<string>&v, int index, 
                                              string curr)
{
    int n = str.length();
    
    // base case
    if (index == n)
    {
       v.push_back(curr);    
       return;
    }   

    // Two cases : Do not include str[index]
    //             Include str[index]    
    powerSetUtil(str, v, index+1, curr);
    powerSetUtil(str, v, index+1, curr+str[index]);
}

vector <string> powerSet(string s)
{
    vector<string> ans;
    powerSetUtil(s, ans,0,"");
    return ans;
}

// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        vector<string> ans = powerSet(s);
        sort(ans.begin(),ans.end());
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends