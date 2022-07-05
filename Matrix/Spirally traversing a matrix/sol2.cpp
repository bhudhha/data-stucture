#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};
vector<vector<int>> spiralMatrix(int m, int n, Node *head)
{
    vector<vector<int>> matrix(m, vector<int>(n, 0));
    int top = 0, left = 0, right = n - 1, bottom = m - 1;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            if (head != NULL)
            {
                matrix[top][i] = head->val;
                head = head->next;
            }
            else
            {
                matrix[top][i] = -1;
            }
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            if (head != NULL)
            {
                matrix[i][right] = head->val;
                head = head->next;
            }
            else
            {
                matrix[i][right] = -1;
            }
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                if (head != NULL)
                {
                    matrix[bottom][i] = head->val;
                    head = head->next;
                }
                else
                {
                    matrix[bottom][i] = -1;
                }
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                if (head != NULL)
                {
                    matrix[i][left] = head->val;
                    head = head->next;
                }
                else
                {
                    matrix[i][left] = -1;
                }
            }
            left++;
        }
    }
    return matrix;
}
int main()
{
    int m = 3, n = 5;
    vector<int> vec = {3, 0, 2, 6, 8, 1, 7, 9, 4, 2, 5, 5, 0};
    Node *head = new Node(vec[0]);
    Node *curr = head;
    for (int i = 1; i < vec.size(); i++)
    {
        Node *temp = new Node(vec[i]);
        curr->next = temp;
        curr = curr->next;
    }
    vector<vector<int>> ans = spiralMatrix(m, n, head);
}