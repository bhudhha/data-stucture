#include <bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data;
    node *pre;
    node *next;
    node(int x)
    {
        data = x;
        pre = NULL;
        next = NULL;
    }
};
node *addnode(node *head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->pre = curr;
    return head;
}
node *insertbeg(node *head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        return temp;
    }
    temp->next = head;
    head->pre = temp;
    head = temp;
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
    node *head = NULL;
    head = addnode(head, 10);
    head = addnode(head, 20);
    head = addnode(head, 30);
    head = addnode(head, 40);
    dis(head);
    head = insertbeg(head, 5);
    dis(head);
    head = addnode(head, 50);
    dis(head);
}