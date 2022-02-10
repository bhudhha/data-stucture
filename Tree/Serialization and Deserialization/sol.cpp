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
void serial(Node *root, vector<int> &arr)
{
    if (root == NULL)
    {
        arr.push_back(-1);
        return;
    }
    arr.push_back(root->data);
    serial(root->left, arr);
    serial(root->right, arr);
}
Node *deserial(vector<int> arr, int &ind)
{
    if (ind == arr.size())
    {
        return NULL;
    }
    int val = arr[ind];
    ind++;
    if (val == -1)
    {
        return NULL;
    }
    Node *root = new Node(val);
    root->left = deserial(arr, ind);
    root->right = deserial(arr, ind);
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    vector<int> ans;
    serial(root, ans);
    for (auto e : ans)
    {
        cout << e << " ";
    }
    cout << endl;
    int ind = 0;
    Node *head = deserial(ans, ind);
    inorder(head);
}