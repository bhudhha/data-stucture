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
Node* getSuc(Node* root,int data){
    Node* curr=root->right;
    while(curr!=NULL && curr->data<data){
        curr=curr->left;
    }
    return curr;
}
Node *del(Node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data < data)
    {
        root->right = del(root->right, data);
    }
    else if (root->data > data)
    {
        root->left = del(root->left, data);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }else{
            Node* succ=getSuc(root,data);
            root->data=succ->data;
            root->right=del(root->right,succ->data);
        }
    }
    return root;
}
Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    else if (root->data < data)
    {
        root->right = insert(root->right, data);
    }
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    return root;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    insert(root,20);
    Node *head = del(root, 10);
    pre(head);
}