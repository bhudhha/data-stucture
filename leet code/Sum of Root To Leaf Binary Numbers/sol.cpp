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
void fun(TreeNode *root, vector<string> &ans, string curr)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        curr += to_string(root->val);
        ans.push_back(curr);
        return;
    }
    curr += to_string(root->val);
    fun(root->left, ans, curr);
    fun(root->right, ans, curr);
}
int sumRootToLeaf(TreeNode *root)
{
    vector<string> ans;
    string curr;
    fun(root, ans, curr);
    int res = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        string v = ans[i];
        int curr_res = 0;
        for (int j = 0; j < v.length(); j++)
        {
            curr_res = (curr_res << 1) | (v[j] == '1' ? 1 : 0);
        }
        res += curr_res;
    }

    return res;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(1);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(1);
    int ans = sumRootToLeaf(root);
    cout << ans;
}