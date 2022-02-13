#include <bits/stdc++.h>
using namespace std;
int buy(vector<int> prices)
{
    int res=0;
    for(int i=0;i<prices.size();i++){
      int diff=prices[i+1]-prices[i];
      if(diff<0){
          int find=res-abs(diff);
          if(find>0){
              res=res-find;
          }
      }else{
          res+=diff;
      }
    }
    return res;
}
int main()
{
    vector<int> prices = {7,6,4,3,1};
    int i = buy(prices);
    cout << i << endl;
}