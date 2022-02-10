#include <bits/stdc++.h>
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
void printleft(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(NULL);
    q.push(root);
    while (q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            Node *temp = q.front();
            cout<<temp->data<<" ";
            q.push(NULL);
            continue;
        }
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(50);
    root->left->left = new Node(40);
    root->right->left = new Node(60);
    root->right->left->right = new Node(80);
    root->right->left->left = new Node(70);
    printleft(root);
}