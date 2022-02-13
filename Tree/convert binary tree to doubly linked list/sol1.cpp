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
        cout << temp->data << " ";
        temp = temp->right;
    }
}
void inorder(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, ans);
    cout << root->data << " ";
    ans.push_back(root->data);
    inorder(root->right, ans);
}
Node *BTToDLL(Node *root)
{
    vector<int> ans;
    inorder(root, ans);
    Node *head = new Node(ans[0]);
    Node *curr = head;
    for (int i = 1; i < ans.size(); i++)
    {

        Node *val = new Node(ans[i]);
        curr->right = val;
        val->left = curr;
        curr = curr->right;
    }
    return head;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(12);
    root->right->left = new Node(11);
    root->right->right = new Node(13);
    // inorder(root);
    Node *head = BTToDLL(root);
    cout << endl;
    print(head);
}