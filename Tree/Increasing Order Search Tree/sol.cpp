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
    Node *curr = root;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->right;
    }
}
void inorder(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
Node *increasingBST(Node *root)
{
    vector<int> ans;
    inorder(root, ans);
    Node *head = new Node(ans[0]);
    Node *curr = head;
    for (int i = 1; i < ans.size(); i++)
    {
        Node *val = new Node(ans[i]);
        curr->right = val;
        curr = curr->right;
    }
    return head;
}
int main()
{
    Node *root = new Node(5);
    root->left = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->left->left->left = new Node(1);
    root->right = new Node(6);
    root->right->right = new Node(8);
    root->right->right->left = new Node(7);
    root->right->right->right = new Node(9);
    Node *ans = increasingBST(root);
    print(ans);
}