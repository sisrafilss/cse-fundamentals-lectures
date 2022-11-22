#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

// Insert Node at Head
void insertionAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}


// Print Linked List
void displayList(Node *head)
{
    if (head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->value;
        if (head->next != NULL) cout << " -> ";
        head = head->next;
    }
}


int main()
{
    int n;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        insertionAtTail(head, value);
    }

    Node *temp = head;
    while(temp != NULL)
    {
        if (temp->value % 2 == 0)
        {
            temp->value = -1;
        }
        temp = temp->next;
    }

    displayList(head);

    return 0;
}
