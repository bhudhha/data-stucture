#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    /* data */
    int data;
    TreeNode *left, *right;
    TreeNode(int d)
    {
        data = d;
        left = right = NULL;
    }
};
class Solution
{
public:
    int start = 0;
    TreeNode *str2treeHelper(string &s, int &n)
    {

        if (start >= n)
        {
            return NULL;
        }
        bool neg = false;
        if (s[start] == '-')
        {
            neg = true;
            start++;
        }
        int num = 0;
        int val = s[start] - '0';
        while (start < n && 0 <= val && val <= 9)
        {
            num = num * 10 + val;
            start++;
            val = s[start] - '0';
        }
        if (neg)
        {
            num = -num;
        }
        TreeNode *root = new TreeNode(num);
        if (start >= n)
        {
            return root;
        }
        if (start < n && s[start] == '(')
        {
            start++;
            root->left = str2treeHelper(s, n);
        }
        if (start < n && s[start] == ')')
        {
            start++;
            return root;
        }
        if (start < n && s[start] == '(')
        {
            start++;
            root->right = str2treeHelper(s, n);
        }
        if (start < n && s[start] == ')')
        {
            start++;
            return root;
        }
        return root;
    }
    TreeNode *str2tree(string st, int n)
    {
        if (n == 0)
        {
            return NULL;
        }
        return str2treeHelper(st, n);
    }
};
int inorder(TreeNode *root, int k)
{
    queue<TreeNode *> q;
    q.push(root);
    int count = 0;
    int res = 0;
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            TreeNode *curr = q.front();
            q.pop();
            if (count == k)
            {
                res += curr->data;
            }
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }

        count++;
    }
    return res;
}
int main()
{
    Solution s;
    string st = "1(-2()(4))(3)";
    int n = 13;
    TreeNode *curr = s.str2tree(st, n);
    cout << inorder(curr, 1);
}