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
ListNode *evenodd(ListNode *head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    ListNode *os = head;
    ListNode *es = head->next;
    ListNode *oe = NULL, *ee = NULL;
    bool flag = true;
    for (ListNode *curr = head; curr != NULL; curr = curr->next)
    {
        if(flag==true){
            if(oe==NULL){
                oe=curr;
            }else{
                oe->next=curr;
                oe=oe->next;
            }
            flag=false;
        }else{
            if(ee==NULL){
                ee=curr;
            }else{
                ee->next=curr;
                ee=ee->next;
            }
            flag=true;
        }
    }
    head=os;
    oe->next=es;
    ee->next=NULL;
    return head;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    // head->next->next = new ListNode(3);
    // head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);
    dis(head);
    head = evenodd(head);
    dis(head);
}