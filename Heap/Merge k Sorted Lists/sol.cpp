#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int d)
    {
        val = d;
        next = NULL;
    }
};
ListNode *Ksort(vector<ListNode *> &lists)
{
    priority_queue<pair<int, ListNode *>, vector<pair<int, ListNode *>>, greater<pair<int, ListNode *>>> q;
    for (int i = 0; i < lists.size(); i++)
    {
        if (lists[i] != NULL)
            q.push({lists[i]->val, lists[i]});
    }

    ListNode *dumby = new ListNode(-1);
    ListNode *curr = dumby;

    while (!q.empty())
    {
        auto it = q.top();
        q.pop();
        curr->next = new ListNode(it.first);
        curr = curr->next;
        if (it.second->next != NULL)
        {
            q.push({it.second->next->val, it.second->next});
        }
    }

    return dumby->next;
}
int main()
{
    ListNode *r1 = new ListNode(1);
    r1->next = new ListNode(4);
    r1->next->next = new ListNode(5);
    ListNode *r2 = new ListNode(10);
    r2->next = new ListNode(3);
    r2->next->next = new ListNode(4);
    ListNode *r3 = new ListNode(2);
    r3->next = new ListNode(6);
    vector<ListNode *> arr = {r1, r2, r3};
    ListNode *head = Ksort(arr);
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
    }
}