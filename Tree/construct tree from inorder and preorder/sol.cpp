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
Node *tree(vector<int> in, vector<int> pre, int s, int e, int *predx)
{
    if (s > e)
    {
        return NULL;
    }
    Node *root = new Node(pre[*predx]);
    *predx = *predx - 1;
    int indx;
    for (int i = s; i <= e; i++)
    {
        if (in[i] == root->data)
        {
            indx = i;
            break;
        }
    }
    root->right = tree(in, pre, indx + 1, e, predx);
    root->left = tree(in, pre, s, indx - 1, predx);
    return root;
}
Node *ctree(vector<int> in, vector<int> pre)
{
    cout << "Rahul";
    int s = 0;
    int e = in.size() - 1;
    int predx = in.size() - 1;
    Node *root = tree(in, pre, s, e, &predx);
    cout << "Kumar";
    return root;
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    postorder(root->left);
    postorder(root->right);
}
int main()
{
    vector<int> in = {4, 8, 2, 5, 1, 6, 3, 7};
    vector<int> pre = {8, 4, 5, 2, 6, 7, 3, 1};
    Node *root = ctree(in, pre);
    postorder(root);
}