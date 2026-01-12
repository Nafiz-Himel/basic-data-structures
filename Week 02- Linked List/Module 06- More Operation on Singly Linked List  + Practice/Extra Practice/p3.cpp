// Question: Take a singly linked list as input, then print the maximum value of them.
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void input(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    Node *tmp = head;
    tail->next = newnode;
    tail = newnode;
}

// int cnt(Node* head)
// {
//     int counnt = 0;
//     while(head != NULL)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }

int cnt(Node *head)
{
    Node* tmp = head;
    int mx = INT_MIN;
    while (tmp != NULL)
    {
        if (mx < head->val)
        {
            mx = head->val;
        }
        tmp = tmp->next;
    }
    return mx;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        if (cin >> val && val != -1)
        {
            input(head, tail, val);
        }
    }

    int mx = cnt(head);
    cout << mx;
    return 0;
}