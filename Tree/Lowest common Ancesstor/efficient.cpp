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
Node *lca(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node *lca1 = lca(root->left, n1, n2);
    Node *lca2 = lca(root->right, n1, n2);
    if (lca1 != NULL && lca2 != NULL)
    {
        return root;
    }
    if (lca1 != NULL)
    {
        return lca1;
    }
    else
    {
        return lca2;
    }
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->right = new Node(14);
    root->left->right->left = new Node(10);
    root->right = new Node(22);
    Node *ans = lca(root, 10, 22);
    cout << ans->data << " ";
}