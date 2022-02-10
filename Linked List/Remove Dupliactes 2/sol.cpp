#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};
void dis(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode *rem(ListNode *head)
{
    unordered_map<int, int> m;
    ListNode *pre = head, *curr = head->next;
    m[head->val]++;
    while (curr != NULL && pre->next!=NULL)
    {
        if (m.find(curr->val) != m.end())
        {

            m[curr->val]++;
            ListNode *temp = curr;
            pre->next = curr->next;
            curr = curr->next;
            delete temp;
        }
        else
        {
            m[curr->val]++;
            pre = pre->next;
            curr = curr->next;
        }
    }
    while (m[head->val] > 1)
    {
        ListNode *temp = head;
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        else
        {
            head = head->next;
        }
        delete temp;
    }
    ListNode *pre2 = head, *curr2 = head->next;
    while (curr2 != NULL)
    {
        if (m[curr2->val] > 1)
        {
            ListNode *temp = curr2;
            pre2->next = curr2->next;
            curr2 = curr2->next;
            delete temp;
        }
        else
        {
            pre2 = pre2->next;
            curr2 = curr2->next;
        }
    }
    return head;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next = new ListNode(4);
    dis(head);
    head = rem(head);
    dis(head);
}