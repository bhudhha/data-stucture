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
int minDiff(Node *root, int k)
{
    if (root == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    int diff = abs(root->data - k);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            diff = min(diff, abs(curr->data - k));
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
    return diff;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(5);
    root->left->right->left = new Node(3);
    root->left->right->left->right = new Node(4);
    root->left->right->right = new Node(6);
    root->right = new Node(11);
    int ans = minDiff(root, 13);
    cout << ans;
}