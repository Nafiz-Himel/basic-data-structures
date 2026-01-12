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
    Node *tmp = head;
    tail->next = newnode;
    tail = tail->next;
}

int count(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int count_1 = 0;
    int i = 0;
    while (i < 2)
    {
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            input(head, tail, val);
        }
        count_1 = count(head);

        i++;
    }
    if (count_1 % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}