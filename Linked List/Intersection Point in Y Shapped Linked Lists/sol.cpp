#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void dis(Node* head)
{
    Node*temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int inter(Node*head1, Node*head2)
{
    set<Node*> s;
    int ans=0;
    for (Node*temp = head1; temp != NULL; temp = temp->next)
    {
        s.insert(temp);
    }
    for (Node*temp = head2; temp != NULL; temp = temp->next)
    {
        if (s.find(temp) != s.end())
        {
        ans = temp->data;
            break;
        }
    }
    s.erase(s.begin(),s.end());
    return ans;
}
int main()
{
    Node*head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);
    head1->next->next->next = new Node(30);
    Node*head2 = new Node(100);
    head2->next = new Node(200);
    head2->next->next = new Node(300);
    head2->next->next->next = head1->next->next;
    dis(head1);
    dis(head2);
    int ans = inter(head1, head2);
    cout << ans;
}