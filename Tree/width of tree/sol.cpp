#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};
int print(Node* root){
    if(root==NULL){
        return 0;
    }
    queue<Node*> q;
    q.push(root);
    int res=0;
    while (q.empty()==false)
    {
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++){
             Node* curr=q.front();
             q.pop();
             if(curr->left!=NULL){
                 q.push(curr->left);
             }
             if(curr->right!=NULL){
                 q.push(curr->right);
             }
        }
    }
    return res;
}
int main(){
       Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(50);
    root->left->left = new Node(40);
    root->right->left = new Node(60);
    root->right->left->right = new Node(80);
    root->right->left->left = new Node(70);
    cout<<print(root);
}