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
vector<int> v;
void isBST(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    isBST(root->left);
    v.push_back(root->data);
    isBST(root->right);
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(11);
    root->right = new Node(80);
    root->right->left = new Node(60);
    root->right->right = new Node(100);
    isBST(root);
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1] && v[i] == v[i - 1])
        {
            cout << "No\n";
        }
    }
    cout << "Yes\n";
}