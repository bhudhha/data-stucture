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
vector<int> spiral(Node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    queue<Node *> q;
    stack<int> st;
    ans.push_back(root->data);
    q.push(root->left);
    q.push(root->right);
    bool rev = false;
    while (q.empty() == false)
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (rev == true)
            {
                st.push(curr->data);
            }
            else
            {
                ans.push_back(curr->data);
            }

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        while (st.empty() == false)
        {
            ans.push_back(st.top());
            st.pop();
        }
        rev = !rev;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return ans;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(25);
    root->left->left->left = new Node(26);
    root->left->left->right = new Node(27);
    root->left->right = new Node(28);
    root->left->right->right = new Node(29);
    root->right = new Node(30);
    root->right->left = new Node(34);
    root->right->right = new Node(38);
    root->right->right->left = new Node(35);
    root->right->right->right = new Node(40);
    vector<int> ans = spiral(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}