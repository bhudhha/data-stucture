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
    cout<<endl;
}
bool detectloop(node *head)
{
    node *slow = head, *fast = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    int count = 0;
    do
    {
        slow = slow->next;
        count++;
    } while (slow != fast);
    cout << count<< endl;
    if (flag == true)
    {
        slow = head;
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        cout<<"loop head node is "<<fast->next->data<<endl;
        fast->next = NULL;
    }
    dis(head);
    return flag;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);
    head->next->next->next->next->next->next = new node(70);
    head->next->next->next->next->next->next->next = new node(80);
    head->next->next->next->next->next->next->next->next = head->next->next->next;
    bool ans = detectloop(head);
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        dis(head);
    }
}