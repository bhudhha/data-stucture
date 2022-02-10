#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *pre;
    Node *next;
    Node(int x)
    {
        data = x;
        pre = next = NULL;
    }
};
Node *addNode(Node *head, int x)
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
    temp->pre = curr;
    return head;
}
void dis(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node *addpos(Node *head, int x, int pos)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    for (int i = 0; i <pos; i++)
    {
        curr = curr->next;
    }
    temp->next=curr->next;
    temp->pre=curr;
    curr->next->pre=temp;
    curr->next=temp;
    // cout << curr->data << endl;
    return head;
}
int main()
{
    Node *head = NULL;
    head = addNode(head, 10);
    head = addNode(head, 20);
    head = addNode(head, 30);
    head = addNode(head, 40);
    dis(head);
    int pos = 0;
    head = addpos(head, 50, pos);
    dis(head);
}