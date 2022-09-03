#include <bits/stdc++.h>
using namespace std;
struct TrieNode
{
    TrieNode *child[26];
    bool isEnd;
    TrieNode()
    {
        isEnd = false;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
    }
};
int main()
{
    TrieNode *root = new TrieNode();
    vector<string> arr = {"zebra", "dog", "duck", "dove"};
    for (int i = 0; i < arr.size(); i++)
    {
        
    }
}