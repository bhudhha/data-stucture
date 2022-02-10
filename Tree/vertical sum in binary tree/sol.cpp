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
map<int, int> m;
void vertical(Node *root, int c)
{
    if (root == NULL)
    {
        return;
    }
    vertical(root->left, c - 1);
    m[c] += root->data;
    vertical(root->right, c + 1);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->left->right = new Node(20);
    root->left->right->right = new Node(25);
    root->left->right->right->right = new Node(80);
    root->left->left = new Node(35);
    root->left->left->left = new Node(40);
    root->right = new Node(75);
    vertical(root, 0);
    for (auto e : m)
    {
        cout << e.second << " ";
    }
}