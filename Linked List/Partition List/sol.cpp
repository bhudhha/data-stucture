#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node()
    {
    }
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
Node *fun(Node *head, int x)
{
    Node *dummy1 = new Node();
    Node *dummy2 = new Node();
    Node *temp = head;
    Node *curr1 = dummy1;
    Node *curr2 = dummy2;
    while (temp)
    {
        if (temp->data < x)
        {

            curr1->next = temp;
            temp = temp->next;

            curr1 = curr1->next;
            curr1->next = NULL;
        }
        else
        {

            curr2->next = temp;
            temp = temp->next;
            curr2 = curr2->next;
            curr2->next = NULL;
        }
    }
    curr2->next = NULL;
    curr1->next = dummy2->next;
    return dummy1->next;
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(2);
    int x = 3;

    Node *ans = fun(head, x);
    while (ans != NULL)
    {
        /* code */
        cout << ans->data << " ";
        ans = ans->next;
    }
}