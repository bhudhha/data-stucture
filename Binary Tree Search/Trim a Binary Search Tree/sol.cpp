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
Node *trim(Node *root, int low, int high)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data < low)
    {
        return trim(root->right, low, high);
    }
    if (root->data > high)
    {
        return trim(root->left, low, high);
    }
    root->left = trim(root->left, low, high);
    root->right = trim(root->right, low, high);
    return root;
}
void print(Node *root)
{
    if (root != NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}
int main()
{
    Node *root = new Node(3);
    root->right = new Node(4);
    root->left = new Node(0);
    root->left->right = new Node(2);
    root->left->right->left = new Node(1);
    int low = 1;
    int high = 3;
    Node *ans = trim(root, low, high);
    if(ans==NULL){
        cout<<"NO ";
    }else{
        cout<<"YES ";
    }
    print(ans);
}