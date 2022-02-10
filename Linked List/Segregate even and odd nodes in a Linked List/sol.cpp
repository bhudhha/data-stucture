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
}
node *evenodd(node *head)
{
    node *es = NULL, *ee = NULL, *os = NULL, *oe = NULL;
    for (node *curr = head; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (es == NULL)
            {
                es = curr;
                ee = curr;
            }
            else
            {
                ee->next = curr;
                ee = ee->next;
            }
        }
        else
        {
            if (os == NULL)
            {
                os = curr;
                oe = curr;
            }
            else
            {
                oe->next = curr;
                oe = oe->next;
            }
        }
    }
    if (es == NULL || os == NULL)
    {
        return head;
    }
    head = es;
    ee->next = os;
    oe->next = NULL;
    return head;
}
int main()
{
    node *head = new node(17);
    head->next = new node(15);
    head->next->next = new node(8);
    head->next->next->next = new node(12);
    head->next->next->next->next = new node(10);
    head->next->next->next->next->next = new node(5);
    head->next->next->next->next->next->next = new node(4);
    dis(head);
    head = evenodd(head);
    dis(head);
}