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
Node *floor(Node *root, int data)
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
            root = root->left;
        }
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(30);
    Node *head = floor(root, 0);
    if (head == NULL)
    {
        cout << "No floor exist\n";
    }
    cout << head->data;
}