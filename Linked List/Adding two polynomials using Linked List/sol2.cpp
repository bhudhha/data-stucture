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
    Node *sum = NULL; // head of sum polynomial
    Node *ptr = NULL;

    while (p1 || p2)
    {
        int p, c;

        if (p1 == NULL)
        {
            // if p1 is NULL we pick values from p2
            p = p2->pow;
            c = p2->coeff;
            p2 = p2->next;
        }

        else if (p2 == NULL)
        {
            // if p2 is NULL we pick values from p1
            p = p1->pow;
            c = p1->coeff;
            p1 = p1->next;
        }

        else
        {
            int pow1 = p1->pow, pow2 = p2->pow;

            p = max(pow1, pow2); // picking max power

            c = (p1->coeff) * (pow1 >= pow2) + (p2->coeff) * (pow2 >= pow1);
            // picking coefficient of greater power

            if (pow1 >= pow2)
                p1 = p1->next;
            if (pow2 >= pow1)
                p2 = p2->next;
        }

        if (!ptr)
            sum = ptr = new Node(c, p);
        // creating head of sum plynomial
        else
        {
            // adding new quantity to polynomial
            ptr->next = new Node(c, p);
            ptr = ptr->next;
        }
    }
    return sum;
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