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

Node *pre = NULL, *first = NULL, *second = NULL;
void fix_bst(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    fix_bst(root->left);
    if (pre != NULL && pre->data > root->data)
    {
        if (first == NULL)
        {
            first = pre;
        }
        else
        {
            second = root;
        }
    }
    pre = root;
    fix_bst(root->right);
}
Node *bal_Bst(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    fix_bst(root);
    swap(first->data, second->data);
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(60);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->right = new Node(80);
    root->right->left = new Node(8);
    root->right->right = new Node(100);
    inorder(root);
    cout << endl;
    Node *head = bal_Bst(root);

    inorder(head);
}