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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->right;
    }
}
Node *BTToDLL(Node *root)
{
    if (root == NULL)
    {
        return root;
    }
    static Node *pre = NULL;
    Node *head = BTToDLL(root->left);
    if (pre == NULL)
    {
        head = root;
    }
    else
    {
        root->left = pre;
        pre->right = root;
    }
    pre = root;
    BTToDLL(root->right);
    return head;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(12);
    root->right->left = new Node(11);
    root->right->right = new Node(13);
    // inorder(root);
    Node* head=BTToDLL(root);
    print(head);
}