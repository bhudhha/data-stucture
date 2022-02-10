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
void inorder(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
    }
    inorder(root->left, ans);
    inorder(root->right, ans);
}
void side(Node *root, bool flag, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    ans.push_back(root->data);
    if (flag)
    {
        side(root->left, flag, ans);
    }
    if (!flag)
    {
        side(root->right, flag, ans);
    }
}
vector<int> boundary(Node *root)
{
    vector<int> ans;
    ans.push_back(root->data);
    if (root->left != NULL)
    {
        vector<int> left;
        vector<int> left_leaf;
        side(root->left, true, left);
        inorder(root->left, left_leaf);
        for (int i = 0; i < left.size(); i++)
        {
            ans.push_back(left[i]);
        }
        for (int i = 1; i < left_leaf.size(); i++)
        {
            ans.push_back(left_leaf[i]);
        }
    }
    if (root->right != NULL)
    {
        vector<int> right;
        vector<int> right_leaf;
        side(root->right, false, right);
        inorder(root->right, right_leaf);
        for (int i = 0; i < right_leaf.size() - 1; i++)
        {
            ans.push_back(right_leaf[i]);
        }
        reverse(right.begin(), right.end());
        for (int i = 0; i < right.size(); i++)
        {
            ans.push_back(right[i]);
        }
    }
    return ans;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->left->right->right = new Node(3);
    root->left->right->right->left = new Node(7);
    root->left->right->right->right = new Node(8);
    root->left->left->left = new Node(6);
    root->left->left->right = new Node(5);
    vector<int> ans = boundary(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}