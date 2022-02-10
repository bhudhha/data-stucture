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
node* rev(node*head){
    node* curr=head;
    node*pre=NULL,*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
        
    }
    return pre;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    dis(head);
    head = rev(head);
    dis(head);
}