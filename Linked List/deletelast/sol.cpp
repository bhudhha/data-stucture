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
node *del(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    node *pre = NULL, *curr = head;
    while (curr->next != NULL)
    {
        pre = curr;
        curr = curr->next;
    }
    pre->next = NULL;
    free(curr);
    return head;
}
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
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    dis(head);
    head = del(head);
    dis(head);
}