#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int coeff;
    int pow;
    Node *next;
    Node(int x, int y)
    {
        coeff = x;
        pow = y;
        next = NULL;
    }
};
void show(Node *n)
{
    Node *node = n;
    while (node->next != NULL)
    {
        cout << node->coeff << "x^" << node->pow;
        node = node->next;
        if (node->coeff >= 0)
        {
            if (node->next != NULL)
            {
                cout << "+";
            }
        }
    }
    if (node->coeff >= 0)
    {
        cout << "+";
    }
    cout << node->coeff << "x^" << node->pow << "\n";
}
Node *add(Node *poly1, Node *poly2)
{
    Node *poly = NULL;
    Node *curr = NULL;
    while (poly1->next || poly2->next)
    {
        if (poly1->pow > poly2->pow)
        {
            Node *temp;
            temp->coeff = poly1->coeff;
            temp->pow = poly1->pow;
            if (curr != NULL)
            {
                poly = temp;
            }
            else
            {
                curr->next = temp;
            }
            curr = temp;
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow)
        {
            Node *temp;
            temp->coeff = poly2->coeff;
            temp->pow = poly2->pow;
            if (curr != NULL)
            {
                poly = temp;
            }
            else
            {
                curr->next = temp;
            }
            curr = temp;
            poly2 = poly2->next;
        }
        else
        {
            Node *temp;
            temp->coeff = poly1->coeff + poly2->coeff;
            temp->pow = poly1->pow;
            if (curr != NULL)
            {
                poly = temp;
            }
            else
            {
                curr->next = temp;
            }
            curr = temp;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    return poly;
}
int main()
{
    Node *poly1 = new Node(5, 2);
    poly1->next = new Node(4, 1);
    poly1->next->next = new Node(2, 0);
    show(poly1);
    Node *poly2 = new Node(-5, 1);
    poly2->next = new Node(-5, 0);
    show(poly2);
    Node *ans = add(poly1, poly2);
    show(ans);
}