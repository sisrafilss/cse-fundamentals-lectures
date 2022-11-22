#include<bits/stdc++.h>
using namespace std;

// Create Node Class
class Node
{
public:
    int value;
    Node* Next;
    Node(int val)
    {
        this->value = val;
        this->Next = NULL;
    }

};

// Take pointer of head and add the value at the end of it
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

    temp = newNode;
}


// Print the Nodes until it get Node->Next == NULL
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
    Node *head = NULL;

    int val;
    char yn;
    cout << "Enter the value: ";
    cin >> val;
    insertAtTail(head, val);

    cout << "Do you want to continue? (Y/N): ";
    cin >> yn;

    while(yn == 'Y')
    {
        cout << "Enter the value: ";
        cin >> val;

        // Insert the new value at the end of the Linked List
        insertAtTail(head, val);
        cout << "Do you want to continue? (Y/N): ";
        cin >> yn;
    }



    cout << endl;
    cout << "Inserted values are: ";

    // Pass head of the Node to display function to print the List
    display(head);
    cout << endl;

    return 0;
}
