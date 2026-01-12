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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_idx(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        Node *tmp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (tmp->next == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    if (deleteNode == NULL)
    {
        return;
    }
    tmp->next = deleteNode->next;
    if (deleteNode == tail)
    {
        tail = tmp;
    }
    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val;
        if (tmp->next)
        {
            cout << " ";
        }
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_at_idx(head, tail, v);
        }
        print_linked_list(head);
    }
    return 0;
}
