#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int c)
    {
        val = c;
        next = NULL;
    }
};
ListNode *reverse_to(ListNode *head, int n, int m)
{
    if (head == NULL)
    {
        return NULL;
    }
    ListNode *cur = head, *pre = NULL;
    while (n > 1)
    {
        pre = cur;
        cur = cur->next;
        m--;
        n--;
    }
    ListNode *con = pre, *tail = cur;
    ListNode *third = NULL;
    while (m > 0)
    {
        third = cur->next;
        cur->next = pre;
        pre = cur;
        cur = third;
        m--;
    }
    if (con != NULL)
    {
        con->next = pre;
    }
    else
    {
        head = pre;
    }
    tail->next = cur;
    return head;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    reverse_to(head, 2, 4);
}