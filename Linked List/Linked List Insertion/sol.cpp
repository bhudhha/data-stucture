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
Node *insertatbeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
    return head;
}
Node *insertatend(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
void dis(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    int n, key, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val >> key;
        switch (key)
        {
        case 0:
            head = insertatbeg(head, val);
            break;
        case 1:
            head = insertatend(head, val);
            break;
        default:
            cout << "error";
            break;
        }
    }
    dis(head);
}