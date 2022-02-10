#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *del(Node *head, int n)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    int c = 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        c++;
    }

    int d = c - n;
    Node *tell = head;
    while (d > 0)
    {
        tell = tell->next;
        d--;
    }
    Node *delNode = tell->next;
    tell->next = tell->next->next;
    delete delNode;
    return head;
}
void print(Node *root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        root = root->next;
    }
}
int main()
{
    Node *head = new Node(1);
    // head->next = new Node(2);
    // head->next->next = new Node(3);
    // head->next->next->next = new Node(4);
    // head->next->next->next->next = new Node(5);
    int n = 1;
    Node *root = del(head, n);
    print(root);
}