#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int x)
    {
        data = x;
        next = NULL;
    }
};
void dis(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode *rem(ListNode *head, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    ListNode *temp = head;
    ListNode *pre = NULL;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            if (temp == head)
            {
                ListNode *del = head;
                head = head->next;
                temp = temp->next;
                pre = temp;
                delete del;
            }
            else
            {
                ListNode *del = temp;
                pre->next = temp->next;
                temp = temp->next;
                delete del;
            }
        }
        else
        {
            pre = temp;
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(1);
    head->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next = new ListNode(1);
    dis(head);
    head = rem(head, 1);
    dis(head);
}