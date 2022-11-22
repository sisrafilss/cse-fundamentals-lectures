#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* Next;

    // Constructor
    Node(int val)
    {
        this->value = val;
        this->Next = NULL;
    }
};


void insertAtTail(Node* &head, int val)
{
    Node* newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void display(Node* n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL) cout << " -> ";
        n = n->Next;
    }
}

int main()
{
    Node* head = NULL;

    insertAtTail(head, 5);
    insertAtTail(head, 7);
    insertAtTail(head, 1);
    insertAtTail(head, 14);
    insertAtTail(head, 3);
    insertAtTail(head, 11);

    display(head);
    cout << endl;

    cout << head->Next << endl;

    return 0;
}
