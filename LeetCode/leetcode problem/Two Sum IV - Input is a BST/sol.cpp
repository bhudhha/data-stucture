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
bool isPairPresent(Node *root, int k)
{
    stack<Node *> s1;
    stack<Node *> s2;
    bool done1 = false, done2 = false;
    int val1 = 0, val2 = 0;
    Node *curr1 = root, *curr2 = root;
    while (1)
    {
        while (done1 == false)
        {
            if (curr1 != NULL)
            {
                s1.push(curr1);
                curr1 = curr1->left;
            }
            else
            {
                if (s1.empty())
                    done1 = 1;
                else
                {
                    curr1 = s1.top();
                    s1.pop();
                    val1 = curr1->data;
                    curr1 = curr1->right;
                    done1 = 1;
                }
            }
        }
        while (done2 == false)
        {
            if (curr2 != NULL)
            {
                s2.push(curr2);
                curr2 = curr2->right;
            }
            else
            {
                if (s2.empty())
                    done2 = 1;
                else
                {
                    curr2 = s2.top();
                    s2.pop();
                    val2 = curr2->data;
                    curr2 = curr2->left;
                    done2 = 1;
                }
            }
        }
        if ((val1 != val2) && (val1 + val2) == k)
        {
            cout << "Pair Found: " << val1 << "+ " << val2 << " = " << k << endl;
            return true;
        }
        else if ((val1 + val2) < k) 
            done1 = false;
        else if ((val1 + val2) > k)
            done2 = false;
        if (val1 >= val2)
            return false;
    }
}
int main()
{

    Node *root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);

    int target = 33;
    if (isPairPresent(root, target) == false)
        cout << "\nNo such values are found\n";
    return 0;
}