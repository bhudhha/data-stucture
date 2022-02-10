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
bool isPath(Node *root, vector<Node *> &p, int n)
{
    if (root == NULL)
    {
        return false;
    }
    p.push_back(root);
    if (root->data == n)
    {
        return true;
    }
    if (isPath(root->left, p, n) || isPath(root->right, p, n))
    {
        return true;
    }
    p.pop_back();
    return false;
}
Node *lca(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    vector<Node *> p1, p2;
    if (isPath(root, p1, n1) == false || isPath(root, p2, n2) == false)
    {
        return NULL;
    }
    for (int i = 1; i = p1.size() - 1 && i < p1.size() - 1; i++)
    {
        if (p1[i + 1] == p2[i + 1])
        {
            return p1[i + 1];
        }
    }
    return NULL;
}
int main()
{
    Node* root=new Node(20);
    root->left=new Node(8);
    root->left->left=new Node(4);
    root->left->right=new Node(12);
    root->left->right->right=new Node(14);
    root->left->right->left=new Node(10);
    root->right=new Node(22);
    Node *ans = lca(root, 10, 22);
    cout << ans->data << " ";
}