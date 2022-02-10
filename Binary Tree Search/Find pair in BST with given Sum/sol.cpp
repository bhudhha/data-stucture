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
bool ispair(Node *root, int sum, unordered_set<int> &s)
{
    if (root == NULL)
    {
        return false;
    }
    if (ispair(root->left, sum, s) == true)
    {
        return true;
    }
    if (s.find(sum - root->data) != s.end())
    {
        return true;
    }
    else
    {
        s.insert(root->data);
    }
    return ispair(root->right, sum, s);
}
bool isBSTpair(Node *root, int sum)
{
    unordered_set<int> s;
    return ispair(root, sum, s);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(11);
    root->right->right = new Node(30);
    root->right->right->left = new Node(25);
    bool ans = isBSTpair(root, 33);
    cout << ans;
}