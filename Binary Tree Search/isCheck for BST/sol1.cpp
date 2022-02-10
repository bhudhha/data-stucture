#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
bool BST(Node *root, int minn, int maxx)
{
    if (root == NULL)
    {
        return true;
    }
    return (root->data > minn && root->data < maxx && BST(root->left, minn, root->data) && BST(root->right, root->data, maxx));
}
bool isBST(Node *root)
{
    int maxx = INT_MAX;
    int minn = INT_MIN;
    return BST(root, minn, maxx);
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(11);
    root->right = new Node(80);
    root->right->left = new Node(60);
    root->right->right = new Node(100);
    cout << isBST(root);
}