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
Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    else if (root->data < data)
    {
        root->right = insert(root->right, data);
    }
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    return root;
}
void pre(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    pre(root->left);
    pre(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    Node *head = insert(root, 20);
    pre(head);
}