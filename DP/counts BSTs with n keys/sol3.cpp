#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void leaves_Node(Node *root, vector<int>& ans)
{
    if (root == NULL)
    {
        return;
    }
 leaves_Node(root->left, ans);
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
    }
 
    leaves_Node(root->right, ans);
}
void boundary_left(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left)
    {
        ans.push_back(root->data);
        boundary_left(root->left, ans);
    }
    else if (root->right)
    {
        ans.push_back(root->data);
        boundary_left(root->right, ans);
    }
}
void boundary_right(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->right)
    {
        boundary_right(root->right, ans);
        ans.push_back(root->data);
    }
    else if (root->left)
    {
        boundary_right(root->left, ans);
        ans.push_back(root->data);
    }
}
vector<int> boundary(Node *root)
{
    if (root == NULL)
    {
        return {};
    }
    vector<int> ans;
    ans.push_back(root->data);
    if (root->left)
    {
        boundary_left(root->left, ans);
    }
    leaves_Node(root->left, ans);
    leaves_Node(root->right, ans);
    if (root->right)
    {
        boundary_right(root->right, ans);
    }
    return ans;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);
    vector<int> ans = boundary(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}