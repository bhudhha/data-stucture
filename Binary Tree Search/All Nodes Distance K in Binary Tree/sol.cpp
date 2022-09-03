#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left, *right;
    int data;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
void allPrint(Node* root,map<Node*,Node*> m,Node* tar,int k){
    if(!root){
        return ;
    }
    queue<pair<Node*,int>> q;
    set<Node*> vis;
    q.push({tar,k});
    while(!q.empty()){
        Node *curr=q.front().first;
        int val=q.front().second;
        q.pop();
        vis.insert(curr);
        if(val==0){
            cout<<curr->data<<" ";
            continue;
        }
        if(curr->left){
           if(vis.find(curr->left)==vis.end()){
            q.push({curr->left,val-1});
           }
        }
        if(curr->right){
          if(vis.find(curr->right)==vis.end()){
            q.push({curr->right,val-1});
          }
        }
        if(m[curr]){
           if(vis.find(m[curr])==vis.end()){
            q.push({m[curr],val-1});
           }
        }
    }
}
void dfs(Node* root,map<Node*,Node*> &m,Node* par){
    if(root==NULL)
    {
        return ;
    }
    dfs(root->left,m,root);
    m[root]=par;
    dfs(root->right,m,root);
}
int main()
{
    Node *root = new Node(3);
    root->left = new Node(5);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);
    root->right = new Node(1);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    map<Node*,Node*> m;
    dfs(root,m,NULL);
    allPrint(root,m,root->left,2);
}