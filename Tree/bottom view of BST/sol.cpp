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
vector<int> bottom(Node *root)
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
            q.push({root->left, hd - 1});
        }
        if (curr->right != NULL)
        {
            q.push({root->right, hd + 1});
        }
    }
    vector<int> v;
    for (auto e : m)
    {
        if (e.first > 0)
        {
            v.push_back(e.second.back());
        }
        else
        {
            v.push_back(e.second[0]);
        }
    }
    return v;
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->right->right = new Node(25);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->left->right->right = new Node(14);
    root->left->right->left = new Node(10);
    vector<int> ans = bottom(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}