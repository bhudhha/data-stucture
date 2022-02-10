#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *arb;
    Node(int x)
    {
        data = x;
        next = NULL;
        arb = NULL;
    }
};
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
Node *clone(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *next = temp->next;
        temp->next = new Node(temp->data);
        temp->next->next = next;
        temp = next;
    }
    for (Node *curr = head; curr != NULL; curr = curr->next->next)
    {
        curr->next->arb = (curr->arb != NULL) ? curr->arb->next : NULL;
    }
    Node *delhead = head;
    head = head->next;
    delete delhead;
    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        Node *del = curr->next;
        curr->next = curr->next->next;
        delete del;
        curr = curr->next;
    }
    return head;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = new Node(20);

    head->arb = head->next->next;
    head->next->arb = head->next->next->next;
    head->next->next->arb = head;
    head->next->next->next->arb = head->next->next;
    head->next->next->next->next->arb = head->next->next->next;
    dis(head);
    head = clone(head);
    dis(head);
}