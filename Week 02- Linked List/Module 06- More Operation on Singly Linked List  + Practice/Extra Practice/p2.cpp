// Question: Take two singly linked lists as input and check if their sizes are same or not.

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
    tail->next = newnode;
    tail = newnode;
}

int count(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    // Input first linked list
    int val;
    while (cin >> val && val != -1)
    {
        input(head1, tail1, val);
    }

    // Input second linked list
    while (cin >> val && val != -1)
    {
        input(head2, tail2, val);
    }

    // Compare sizes
    int count1 = count(head1);
    int count2 = count(head2);

    count1 == count2 ? cout << "YES" : cout << "NO";
    return 0;
}
