#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void del(Node* val)
{
    Node *tmp = val->next;
    val->next = val->next->next;
    delete tmp;
}

void remove_dupli(Node* head)
{
    Node* newNode = head;
    while (newNode != NULL)
    {
        Node* tmp = newNode;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == newNode->val)
            {
                del(tmp);
            }
            else
            {
                tmp = tmp->next;
            }
        }
        newNode = newNode->next;
    }
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val;
        if (tmp->next)
        {
            cout << " ";
        }
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert(head, tail, val);
    }
    remove_dupli(head);
    print_linked_list(head);
    return 0;
}
