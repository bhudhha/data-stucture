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
node *intpos(node *head, int len, int x)
{
    node *temp = head;
    int i = 0;
    while (i < len)
    {
        temp = temp->next;
        i++;
    }
    node *pre, *curr = new node(x);
    pre = temp->next;
    temp->next = curr;
    curr->next = pre;
    return head;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    int len = 1;
    dis(head);
    head = intpos(head, len, 40);
    dis(head);
    head = intpos(head, len, 50);
    dis(head);
}