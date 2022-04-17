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
void print(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
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
}
int sum = 0;
Node *BST(Node *root)
{
    if (root != NULL)
    {
        BST(root->right);
        sum += root->data;
        root->data = sum;
        BST(root->left);
    }
    return root;
}
int main()
{
    Node *root = new Node(4);
    root->left = new Node(1);
    root->left->right = new Node(2);
    root->left->right->right = new Node(3);
    root->left->left = new Node(0);
    root->right = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    root->right->left = new Node(5);
    print(root);
    Node *ans = BST(root);
    cout << "\n";
    print(ans);
}