#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int da)
    {
        data = da;
        left = right = NULL;
    }
};
Node *fun(Node *root, int k)
{
    while (root!=NULL)
    {
        if (root->data == k)
        {
            return root;
        }
        else if (root->data > k)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}
void print(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->left->right = new Node(3);
    root->left->left = new Node(1);
    root->right = new Node(7);
    print(root);
    int k = 2;
    Node *ans = fun(root, k);
    if (ans == NULL)
    {
        cout << "NO ";
    }
    else
    {
        cout << "YES ";
    }
}