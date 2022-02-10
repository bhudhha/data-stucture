#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
int preind = 0;
Node *ctree(vector<int> in, vector<int> pre, int is, int ie)
{
    if (is > ie)
    {
        return NULL;
    }
    Node * root=new Node(pre[preind++]);
    int inind;
    for(int i=is;i<=ie;i++){
        if(in[i]==root->data){
            inind=i;
            break;
        }
    }
    root->left=ctree(in,pre,is,inind-1);
    root->right=ctree(in,pre,inind+1,ie);
    return root;
}
int main()
{
    vector<int> in = {4, 8, 2, 5, 1, 6, 3, 7};
    vector<int> pre = {8, 4, 5, 2, 6, 7, 3, 1};
    int n = in.size();
    Node *root = ctree(in, pre, 0, n - 1);
    postorder(root);
}