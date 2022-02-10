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
node *rev(node *head)
{
    node *curr = head;
    node *pre = NULL, *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}
node *add(node *head1, node *head2)
{
    node *a = rev(head1);
    node *b = rev(head2);
    node *res = NULL;
    node *pre = NULL, *temp;
    int carry = 0;
    while (a != NULL || b != NULL)
    {
        int sum = carry + (a != NULL ? a->data : 0) + (b != NULL ? b->data : 0);
        carry = sum > 9 ? 1 : 0;
        sum = sum % 10;
        temp = new node(sum);

        if (res == NULL)
        {
            res = temp;
        }
        else
        {
            pre->next = temp;
        }
        pre = temp;
        if (a != NULL)
        {
            a = a->next;
        }
        if (b != NULL)
        {
            b = b->next;
        }
    }
    if (carry > 0)
    {
        temp->next = new node(carry);
        temp=temp->next;
    }
    return res;

}
int main()
{
    node *head1 = new node(2);
    head1->next = new node(4);
    head1->next->next = new node(9);
    dis(head1);
    node *head2 = new node(5);
    head2->next = new node(6);
    head2->next->next = new node(4);
    head2->next->next->next = new node(9);
    
    dis(head2);
    node *head = add(head1, head2);

    dis(head);
}