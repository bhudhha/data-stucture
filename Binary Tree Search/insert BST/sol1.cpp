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
Node *insert(Node *root, int data)
{
    Node *temp = new Node(data);
    Node *p = NULL, *curr = root;
    while (curr != NULL)
    {
        p = curr;
        if (curr->data < data)
        {
            curr = curr->right;
        }
        else if (curr->data > data)
        {
            curr = curr->left;
        }
        else
        {
            return root;
        }
    }
    if (p == NULL)
    {
        return temp;
    }
    if (p->data < data)
    {
        p->right = temp;
    }
    else
    {
        p->left = temp;
    }
    return root;
}
void pre(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    pre(root->left);
    pre(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    Node *head = insert(root, 20);
    pre(head);
}