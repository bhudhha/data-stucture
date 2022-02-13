#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
     bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length()) return false;
        if (s==goal) {
            cout<<"r"<<endl;
            int count [26];
            for (int i = 0; i < s.length(); ++i)
                count[s[i] - 'a']++;

            for (int c: count)
                if (c > 1) return true;
            return false;
        } else {
            int first = -1, second = -1;
            for (int i = 0; i < s.length(); ++i) {
                if (s[i] != goal[i]) {
                    if (first == -1)
                        first = i;
                    else if (second == -1)
                        second = i;
                    else
                        return false;
                }
            }

            return (second != -1 && s[first] == goal[second] &&
                    s[second] == goal[first]);
        }
    }
};
int main(){
    Solution ob;
    string s="ab";
    string goal="ab";
    cout<<ob.buddyStrings(s,goal);
}
// "abcd"
// "badc"