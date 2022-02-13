#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};
void getDecimalValue(ListNode *head)
{
    int count = 0;
    ListNode *curr = head, *next = NULL, *pre = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
        count++;
    }
    count--;
    int data = 0;
    while (pre)
    {
        data += pre->val * pow(2, count);
        count--;
        pre = pre->next;
    }
    cout << data << " ";
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    // head->next->next->next = new ListNode(1);
    getDecimalValue(head);
}