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
node *mergeSort(node *a, node *b)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    node *head = NULL, *tail = NULL;
    if (a->data <= b->data)
    {
        head = tail = a;
        a = a->next;
    }
    else
    {
        head = tail = b;
        b = b->next;
    }
    while (a != NULL && b != NULL)
    {
        if (a->data <= b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if (a == NULL)
    {
        tail->next = b;
    }
    else
    {
        tail->next = a;
    }
    return head;
}
int main()
{
    node *head1 = new node(10);
    head1->next = new node(20);
    head1->next->next = new node(30);
    head1->next->next->next = new node(40);
    node *head2 = new node(5);
    head2->next = new node(15);
    head2->next->next = new node(17);
    head2->next->next->next = new node(18);
    head2->next->next->next->next = new node(35);
    dis(head1);
    dis(head2);
    node *head = mergeSort(head1, head2);
    dis(head);
}