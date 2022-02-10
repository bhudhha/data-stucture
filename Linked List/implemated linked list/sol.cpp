#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next; 
    node(int x){
        data=x;
        next=NULL;
    }
};
void dis(struct node * head){
    struct node * f=head;
    while(f!=NULL){
        cout<<f->data<<" ";
        f=f->next;
    }
}
int main(){
node *head=new node(10);
node* temp1=new node(20);
head->next=temp1;
dis(head);
}