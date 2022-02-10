#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void dis(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int len(Node * root){
    Node* temp=root;
    int num=0;
    while(temp!=NULL){
        num++;
        temp=temp->next;
    }
    return num;
}
Node *kswap(Node *head,int K)
{
   int num=len(head);
    if (num < K)
    {
        return head;
    }
    Node *x = NULL, *x_pre = NULL;
    Node *y = NULL, *y_pre = NULL;
    for (int i = 0; i < K; i++)
    {
        if (x == NULL)
        {
            x = head;
        }
        else
        {
            x_pre = x;
            x = x->next;
        }
    }
    // cout<<x->data<<" "<<x_pre->data;
    for (int i = 0; i < num - K + 1; i++)
    {
        if (y == NULL)
        {
            y = head;
        }
        else
        {
            y_pre = y;
            y = y->next;
        }
    }
    // cout<<y->data<<" "<<y_pre->data;
    if (x_pre == NULL)
    {
        y->next = x->next;
        y_pre->next = x;
        x->next = NULL;
        return y;
    }
    if (y_pre == NULL)
    {
        x->next = y->next;
        x_pre->next = y;
        y->next = NULL;
        return x;
    }
    x_pre->next = y;
    y_pre->next = x;
    Node *nxx = x->next;
    Node *nyy = y->next;
    y->next = nxx;
    x->next = nyy;
    return head;
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    // head->next->next->next->next->next = new Node(6);
    // head->next->next->next->next->next->next = new Node(7);
    // head->next->next->next->next->next->next->next = new Node(8);
    dis(head);
    head = kswap(head,2);
    dis(head);
}