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
void print(Node *root)
{
    if (!root)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}
bool fun(Node *root)
{
    if (!root)
    {
        return true;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    int sum = 0;
    if (root->left)
    {
        sum += root->left->data;
    }
    if (root->right)
    {
        sum += root->right->data;
    }
    return (sum == root->data && fun(root->left) && fun(root->right));
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->left->right = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(2);
    root->right->left = new Node(2);
    // print(root);
    cout << fun(root);
}