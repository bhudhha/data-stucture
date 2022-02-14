// time complexity---O(n)

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
Node *spiral(Node *root)
{
    if (root == NULL)
    {
        return root;
    }
    stack<Node *> s1;
    stack<Node *> s2;
    s1.push(root);
    vector<Node *> ans;
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            Node *curr = s1.top();
            ans.push_back(curr);
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
        while (!s2.empty())
        {
            Node *curr = s2.top();
            ans.push_back(curr);
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
    Node *head = ans[0];
    head->left = NULL;
    head->right = NULL;
    Node *temp = head;
    for (int i = 0; i < ans.size(); i++)
    {
        ans[i]->right = NULL;
        ans[i]->left = NULL;
        temp->right = ans[i];
        temp = temp->right;
    }
    return head;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->left->right = new Node(13);
    root->right->right = new Node(7);
    root->right->right->left = new Node(14);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    Node *ans = spiral(root);
    Node *curr = ans;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->right;
    }
}