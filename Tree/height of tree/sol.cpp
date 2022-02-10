#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}
void print(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
    }
    else
    {
        print(root->left, k - 1);
        print(root->right, k - 1);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(50);
    root->left->left = new Node(40);
    root->right->left = new Node(60);
    root->right->left->right = new Node(80);
    root->right->left->left = new Node(70);
    int h = height(root);
    for (int i = 0; i < h; i++)
    {
        print(root, i);
        cout << endl;
    }
}