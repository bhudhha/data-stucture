#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int d)
    {
        val = d;
        left = right = NULL;
    }
};
TreeNode *searchBST(TreeNode *root, int val)
{
    TreeNode *res = NULL;
    while (root != NULL)
    {
        if (root->val == val)
        {
            return root;
        }
        else if (root->val > val)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return res;
}
void inorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right = new TreeNode(7);
    TreeNode *ans = searchBST(root, 2);
    inorder(ans);
}