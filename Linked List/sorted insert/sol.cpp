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
node* insertsort(node* head,int x){
    node * temp=new node(x);
    if(head==NULL){
        return temp;
    }
    if(head->data>x){
        temp->next=head;
        return temp;
    }
    node * curr=head;
    while(curr->next!=NULL && curr->next->data<x){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    dis(head);
    head = insertsort(head, 70);
    head = insertsort(head, 5);
    head = insertsort(head, 35);
    dis(head);
}