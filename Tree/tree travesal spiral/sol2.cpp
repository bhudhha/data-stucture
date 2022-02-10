#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
vector<int> spiral(Node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    stack<Node *> s1;
    stack<Node *> s2;
    s1.push(root);
    while (s1.empty() == false || s2.empty() == false)
    {
        while (s1.empty() == false)
        {
            Node *curr = s1.top();
            ans.push_back(curr->data);
            s1.pop();
            if (curr->right != NULL)
            {
                s2.push(curr->right);
            }
            if (curr->left != NULL)
            {
                s2.push(curr->left);
            }
        }
        while (s2.empty() == false)
        {
            Node *curr = s2.top();
            ans.push_back(curr->data);
            s2.pop();
            if (curr->left != NULL)
            {
                s1.push(curr->left);
            }
            if (curr->right != NULL)
            {
                s1.push(curr->right);
            }
        }
    }
    return ans;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(25);
    root->left->left->left = new Node(26);
    root->left->left->right = new Node(27);
    root->left->right = new Node(28);
    root->left->right->right = new Node(29);
    root->right = new Node(30);
    root->right->left = new Node(34);
    root->right->right = new Node(38);
    root->right->right->left = new Node(35);
    root->right->right->right = new Node(40);
    vector<int> ans = spiral(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}