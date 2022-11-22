#include<bits/stdc++.h>
using namespace std;

// Node class
class Node
{
public:
    int value;
    Node *Next;

    // Constructor
    Node(int val)
    {
        this->value = val;
        this->Next = NULL;
    }
};

// Insert a node at the end
void insertAtTail(Node* &head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

// Insert a Node at the beginning
void insertAtHead(Node* &head, int val)
{
    // Step 1: newNode creation
    Node* newNode = new Node(val);
    // Step 2: Update of newNode->Next
    newNode->Next = head;
    // Step 3: Update of head
    head = newNode;
}

// Print the linked list
void display(Node *n)
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
    // head initially will be NULL
    Node *head = NULL;

    int val, choice;
    cout << "Choice 1: Insert at Head" << endl << "Choice 2: Insert at Tail" << endl << "Choice 3: Exit" << endl << endl;
    choice = 2;
    while (choice == 1 || choice == 2)
    {
        cout << "Enter the value: ";
        cin >> val;
        if (choice == 1)    insertAtHead(head, val);
        else if (choice == 2)  insertAtTail(head, val);
        cout << "Next Choice: ";
        cin >> choice;
    }

    // Print the Linked list formed yet
    display(head);

    return 0;
}
