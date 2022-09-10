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


int countLength(Node* head)
{
    int cnt = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->Next;
    }

    return cnt;
}

void insertAtHead(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }
    Node* temp = head;

    newNode->Next = head;
    do
    {
        temp = temp->Next;
    }
    while (temp->Next != head);
    temp->Next = newNode;
    head = newNode;
}

void insertAtTail(Node*& head, int val)
{
    Node* newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        newNode->Next = head;
        return;
    }

    Node* temp = head;

    while (temp->Next != head)
    {
        temp = temp->Next;
    }
    newNode->Next = head;
    temp->Next = newNode;
}


void insertionAtSpecificPosition(Node* &head, int pos, int val)
{
    int i = 0;
    Node* temp = head;

    while (i < pos - 2)
    {
        temp = temp->Next;
        i++;
    }
    Node* newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}


void deletionAtHead(Node* &head)
{
    Node* temp = head;
    Node* newHead = head->Next;
    Node* delNode = head;
    if (head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
        return;
    }

    do
    {
        temp = temp->Next;
    }
    while (temp->Next != head);
    head = newHead;
    temp->Next = newHead;
    delete delNode;
}


void deletionAtTail(Node* &head)
{
    Node* temp = head;
    if (temp != NULL && temp->Next != NULL)
    {
        while (temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        Node* delNode = temp->Next;
        temp->Next = NULL;
        delete delNode;
    }
    else
    {
        // Head is NULL
        if (temp == NULL)
        {
            cout << "There is no value in the Linked List" << endl;
        }
        // Head is Tail
        else
        {
            deletionAtHead(head); // This function delete the head of a Linked List
        }
    }
}


void deletionAtSpecificPosition(Node* &head, int position)
{
    if (position != NULL && position <= countLength(head))
    {
        if (position == 1)
        {
            // delete the node from the head
            deletionAtHead(head);
        }
        else
        {
            int i = 1;
            Node* temp = head;
            while (i < position - 1)
            {
                temp = temp->Next;
                i++;
            }

            Node* delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {
        cout << "The position is out of Range" << endl;
    }
}

void display(Node* head)
{
    if (head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
        return;
    }
    Node* temp = head;
    do
    {
        cout << temp->value;
        if (temp->Next != head) cout << " -> ";
        temp = temp->Next;
    }
    while (temp != head);
}


int main()
{
    int value, position;

    Node* head = NULL;

    cout << "Choice 1: Insert at Head" << endl;
    cout << "Choice 2: Insert at Tail" << endl;
    cout << "Choice 3: Insert at specific position" << endl;
    cout << "Choice 4: Deletion at Head" << endl;
    cout << "Choice 5: Deletion at Tail" << endl;
    cout << "Choice 6: Deletion at Specific Position" << endl;
    cout << "Choice 20: View List" << endl;
    cout << "Choice 0: Exit" << endl;

    int choice;
    cout << "Next choice: ";
    cin >> choice;
    while (choice != 0)
    {
        switch(choice)
        {
            case 1:
                cout << "Enter the value: ";
                cin >> value;
                insertAtHead(head, value);
                break;
            case 2:
                cout << "Enter the value: ";
                cin >> value;
                insertAtTail(head, value);
                break;
            case 3:
                cout << "Enter the position: ";
                cin >> position;
                cout << "Enter the value: ";
                cin >> value;
                insertionAtSpecificPosition(head, position, value);
                break;
            case 4:
                deletionAtHead(head);
                break;
            case 5:
                deletionAtTail(head);
                break;
            case 6:
                if (head == NULL)
                {
                    cout << "The List is Empty!" << endl;
                    break;
                }
                cout << "Enter the position: ";
                cin >> position;
                deletionAtSpecificPosition(head, position);
                break;
            case 20:
                 cout << endl << "List: ";
                display(head);
                cout << endl << endl;
                break;
            default:
                break;

        }
        cout << "Next choice: ";
        cin >> choice;
    }

    cout << endl << "List: ";
    display(head);
    cout << endl << endl;

//    cout << "Length: " << countLength(head) << endl;

    return 0;
}
