#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *link;
    Node() {}
    Node(int d)
    {
        data = d;
        link = NULL;
    }
};
void print(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->link;
    }
}
Node *Sort(Node *head)
{
    Node *start = new Node();
    start->link = head;
    Node *curr = head, *prev = start;
    Node *next = curr->link;
    while (curr)
    {
        if (curr->link && (curr->link->data < curr->data))
        {
            while (next && curr->link->data > prev->link->data)
            {
                prev = prev->link;
            }
            Node *temp = prev->link;
            prev->link = curr->link;
            curr->link = curr->link->link;
            prev->link->link = temp;
            prev = start;
        }
        else
        {
            curr = curr->link;
        }
    }
    return start->link;
}
int main()
{
    Node *head = new Node(4);
    head->link = new Node(2);
    head->link->link = new Node(1);
    head->link->link->link = new Node(3);
    print(head);
    Node *ans = Sort(head);
    print(ans);
}