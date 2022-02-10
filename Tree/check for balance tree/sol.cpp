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
void print(Node *root)
{
    if (root)
    {
        print(root->left);
        cout << root->data << " ";
        print(root->right);
    }
}
int solve(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = solve(root->left);
    if (lh == -1)
    {
        return -1;
    }
    int rh = solve(root->right);
    if (rh == -1)
    {
        return -1;
    }
    if (abs(rh - lh) > 1)
    {
        return -1;
    }
    else
    {
        return max(rh, lh) + 1;
    }
}
bool isbalanced(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int s = solve(root);
    if (s == -1)
    {
        return false;
    }
    return true;
}
int main()
{
    Node *root = new Node(18);
    root->left = new Node(4);
    root->right = new Node(38);
    root->right->left = new Node(13);
    root->right->right = new Node(70);
    print(root);
    cout << isbalanced(root);
}