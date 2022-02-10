#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int k){
        data=k;
        left=right=NULL;
    }
};
int main(){
    node* head=new node(10);
    head->left=new node(20);
    head->right=new node(20);
}