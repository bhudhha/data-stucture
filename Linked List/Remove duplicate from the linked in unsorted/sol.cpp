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
node *rem(node *head)
{
    unordered_set<int> s;
    node *pre = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        if (s.find(curr->data) != s.end())
        {
            pre->next = curr->next;
            delete curr;
        }
        else
        {
            s.insert(curr->data);
            pre = curr;
        }
        curr = pre->next;
    }
    return head;
}
int main()
{
    node *head = new node(5);
    head->next = new node(5);
    head->next->next = new node(2);
    head->next->next->next = new node(4);
    dis(head);
    head = rem(head);
    dis(head);
}