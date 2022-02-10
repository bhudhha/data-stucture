#include <bits/stdc++.h>
using namespace std;
struct node
{
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
void dis(node *head)
{
    node *temp=head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = new node(23);
    node *temp = new node(20);
    node *temp2 = new node(30);
    head->next = temp;
    temp->pre = head;
    temp->next = temp2;
    temp2->pre = NULL;
    dis(head);
}