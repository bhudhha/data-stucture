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
Node *ceil(Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->data == data)
        {
            return root;
        }
        else if (root->data > data)
        {
            res = root;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return res;
}
void pre(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data<<" ";
    pre(root->left);
    pre(root->right);
}
int main()
{
    Node *root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right = new Node(70);
    root->right->left = new Node(60);
    root->right->left->left = new Node(55);
    root->right->left->right = new Node(65);
    root->right->right = new Node(78);
    pre(root);
    cout<<"\n";
    Node *head = ceil(root, 63);
    if (head == NULL)
    {
        cout << "does Not exist\n";
    }
    cout << head->data;
}