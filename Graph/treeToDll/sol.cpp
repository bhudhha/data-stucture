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
void print(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    print(root->left);
    cout << root->data << " ";
    print(root->right);
}
Node *pre = NULL;
Node *BToDLL(Node *root)
{

    if (root == NULL)
    {
        return root;
    }
    Node *head = BToDLL(root->left);
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
    BToDLL(root->right);
    return head;
}
void p(Node *ans)
{
    Node *curr = ans;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->right;
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(45);
    root->right->left = new Node(30);
    root->right->right = new Node(50);
    print(root);
    Node *ans = BToDLL(root);
    cout << endl;
    p(ans);
}