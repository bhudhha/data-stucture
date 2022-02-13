#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int data)
    {
        val = data;
        left = right = NULL;
    }
};

void print(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            TreeNode *curr = q.front();
            q.pop();
            cout << curr->val << " ";
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
        cout << endl;
    }
}
void fun(TreeNode *root, string &s)
{
    if (root == NULL)
    {
        s += "()";
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        s += "(";
        s += to_string(root->val);
        s += ")";
        return;
    }
    s += "(";
    s += to_string(root->val);
    fun(root->left, s);
    if (root->right)
    {
        fun(root->right, s);
    }
    s += ")";
}
string tree2str(TreeNode *root)
{
    if (root == NULL)
    {
        return "";
    }
    if (root->left == NULL && root->right == NULL)
    {
        return to_string(root->val);
    }
    string s1, s2;
    if (root->left)
    {
        fun(root->left, s1);
    }
    else
    {
        s1 += "()";
    }
    fun(root->right, s2);
    string ans = to_string(root->val);
    ans += s1;
    ans += s2;
    return ans;
}
TreeNode *str2tree(string s)
{
    TreeNode *root = new TreeNode(s[0] - '0');
    stack<TreeNode *> st;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(root);
        }
        else if (s[i] == ')')
        {
            root = st.top();
            st.pop();
        }
        else
        {
            if (root->left == NULL)
            {
                TreeNode *l = new TreeNode(s[i] - '0');
                root->left = l;
                root = root->left;
            }
            else if (root->right == NULL)
            {
                TreeNode *r = new TreeNode(s[i] - '0');
                root->right = r;
                root = root->right;
            }
        }
    }
    return root;
}
int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(1);
    root->right = new TreeNode(6);
    root->right->left = new TreeNode(5);
    print(root);
    string ans = tree2str(root);
    cout << ans << endl;
    TreeNode *a = str2tree(ans);
    print(a);

}