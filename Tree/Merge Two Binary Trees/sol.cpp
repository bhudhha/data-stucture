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
Node *merge(Node *root1, Node *root2)
{
    if (root1 == NULL)
    {
        return root2;
    }
    if (root2 == NULL)
    {
        return root1;
    }
    root1->data += root2->data;
    root1->left = merge(root1->left, root2->left);
    root1->right = merge(root1->right, root2->right);
    return root1;
}
void print(Node *root)
{
    if (root==NULL)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
int main()
{
    Node *root1 = new Node(1);
    root1->left = new Node(3);
    root1->right = new Node(2);
    root1->left->left = new Node(5);
    Node *root2 = new Node(2);
    root2->left = new Node(1);
    root2->left->right = new Node(4);
    root2->right = new Node(3);
    root2->right->right = new Node(7);
    Node *root = merge(root1, root2);
    print(root);
}