#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int main()
{
    Node *root = new Node(3);
    root->left = new Node(1);
    root->left->left=new Node(3);
    root->right = new Node(4);
    root->right->left = new Node(1);
    root->right->right = new Node(5);

}