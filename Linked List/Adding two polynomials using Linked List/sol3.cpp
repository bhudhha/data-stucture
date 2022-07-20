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
Node *addPolynomial(Node *p1, Node *p2)
{
    Node *res = NULL, *ptr = NULL;
    while (p1 || p2)
    {
        int p, c;
        if (p1 == NULL)
        {
            p = p2->pow;
            c = p2->coeff;
            p2 = p2->next;
        }
        else if (p2 == NULL)
        {
            p = p1->pow;
            c = p1->coeff;
            p1 = p1->next;
        }
        else
        {
            int pow1 = p1->pow, pow2 = p2->pow;
            if (pow1 > pow2)
            {
                p = pow1;
                c = p1->coeff;
                p1 = p1->next;
            }
            else if (pow1 < pow2)
            {
                p = pow2;
                c = p2->coeff;
                p2 = p2->next;
            }
            else
            {
                p = pow1;
                c = p1->coeff + p2->coeff;
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        if (!res)
        {
            res = ptr = new Node(c, p);
        }
        else
        {
            ptr->next = new Node(c, p);
            ptr = ptr->next;
        }
    }
    return res;
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
    Node *ans = addPolynomial(poly1, poly2);
    show(ans);
}