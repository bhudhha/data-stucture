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
void inorder(Node *root, vector<int> &a)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        a.push_back(root->data);
    }
    // cout << root->data << " ";
    inorder(root->left, a);
    inorder(root->right, a);
}
vector<int> fun(Node *root, bool flag)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0 && flag)
            {
                ans.push_back(curr->data);
            }
            if (i == n - 1 && !flag)
            {
                ans.push_back(curr->data);
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
    }
    return ans;
}
vector<int> boundary(Node *root)
{
    vector<int> ans;
    ans.push_back(root->data);
    if (root->left != NULL)
    {
        vector<int> left = fun(root->left, true);
        vector<int> left_leaf;
        inorder(root->left, left_leaf);
        for (int i = 0; i < left.size(); i++)
        {
            cout << left[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < left_leaf.size(); i++)
        {
            cout << left_leaf[i] << " ";
        }
    }
    cout << endl;
    if (root->right != NULL)
    {
        vector<int> right = fun(root->right, false);
        vector<int> right_leaf;
        inorder(root->right, right_leaf);
        reverse(right.begin(), right.end());
        for (int i = 0; i < right.size(); i++)
        {
            cout << right[i] << " ";
        }
        cout << endl;
        for (int i = 00; i < right_leaf.size(); i++)
        {
            cout << right_leaf[i] << " ";
        }
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
    // inorder(root);
    // cout << endl;
    vector<int> ans = boundary(root);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}