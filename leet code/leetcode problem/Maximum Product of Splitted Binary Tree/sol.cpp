
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }
};
int sum;
int maxVal = INT_MIN;
void calmax(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left != NULL)
    {
        int ans = root->left->val * (sum - root->left->val);
        maxVal = max(maxVal, ans);
        calmax(root->left);
    }
    if (root->right != NULL)
    {
        int ans = root->right->val * (sum - root->right->val);
        maxVal = max(maxVal, ans);
        calmax(root->left);
    }
}
int modify(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    root->val = root->val + modify(root->left) + modify(root->right);
    return root->val;
}
void pre(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    pre(root->left);
    pre(root->right);
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    sum = modify(root);
    calmax(root);
    // pre(root);
    cout << maxVal;
}
