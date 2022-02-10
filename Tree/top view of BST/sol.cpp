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
vector<int> top(Node *root)
{
    map<int, vector<int>> m;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (q.empty() == false)
    {
        auto p = q.front();
        Node *curr = p.first;
        int hd = p.second;
        m[hd].push_back(curr->data);
        q.pop();
        if (curr->left != NULL)
        {
            q.push({curr->left, hd - 1});
        }
        if (curr->right != NULL)
        {
            q.push({curr->right, hd + 1});
        }
    }
    vector<int> v;
    for (auto e : m)
    {
        v.push_back(e.second[0]);
    }
    return v;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(15);
    root->left->right = new Node(20);
    root->left->right->right = new Node(25);
    root->left->right->right->right = new Node(80);
    root->left->left = new Node(35);
    root->left->left->left = new Node(40);
    root->right = new Node(75);
    vector<int> ans = top(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}