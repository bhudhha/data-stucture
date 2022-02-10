#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void dis(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node *removedup(node *head)
{
    node *curr = head, *next = head->next;
    while (curr->next != NULL)
    {
        if (curr->data == next->data)
        {
            node *dup = next;
            next = next->next;
            curr->next=next;
            delete dup;
        }
        else
        {
            next = next->next;
            curr = curr->next;
        }
    }
    return head;
}
int main()
{
    node *head = new node(10);
    head->next = new node(10);
    head->next->next = new node(30);
    head->next->next->next = new node(30);
    head->next->next->next->next = new node(30);
    head->next->next->next->next->next = new node(30);
    dis(head);
    head = removedup(head);
    dis(head);
}