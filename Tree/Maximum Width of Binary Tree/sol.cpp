#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void inorder(Node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}
int maxWidth(Node *root)
{
    if (!root)
    {
        return 0;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int res = 0;
    while (!q.empty())
    {
        int n = q.size();
        int s = q.front().second;
        int e = q.back().second;
        res = max(res, e - s + 1);
        for (int i = 0; i < n; i++)
        {
            auto curr = q.front();
            q.pop();
            Node *p = curr.first;
            int val = curr.second;
            if (p->left != NULL)
            {
                q.push({p->left, 2 * val + 1});
            }
            if (p->right != NULL)
            {
                q.push({p->right, 2 * val + 2});
            }
        }
    }
    return res;
}
int main()
{
    Node *root = new Node(1);
    root->right = new Node(2);
    root->right->right = new Node(9);
    root->right->right->right = new Node(7);
    root->left = new Node(3);
    root->left->left = new Node(5);
    root->left->left->left = new Node(6);
    inorder(root);
    cout << "\n";
    int ans = maxWidth(root);
    cout << ans;
}