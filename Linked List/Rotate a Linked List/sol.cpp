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
node *rotate(node *head, int k)
{
    if (k == 0)
    {
        return NULL;
    }
    node *curr = head;
    int count = 1;
    while (count < k && curr != NULL)
    {
        curr = curr->next;
        count++;
    }
    if (curr == NULL)
    {
        return head;
    }
    node *kthnode = curr;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = head;
    head = kthnode->next;
    kthnode->next = NULL;
    return head;
}
int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(6);
    head->next->next->next->next->next->next = new node(7);
    head->next->next->next->next->next->next->next = new node(8);
    // head->next->next->next->next->next->next->next->next = new node(9);
    dis(head);
    int k = 4;
    head = rotate(head, k);
    dis(head);
}