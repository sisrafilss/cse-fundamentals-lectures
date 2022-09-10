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

void insertAtHead(Node* &head, int val);
void insertAtTail(Node* &head, int val);
void display(Node* n);
int countLength(Node* head);
void insertionAtSpecificPosition(Node* &head, int pos, int val);
int searchByValueUnique(Node* head, int key);
void searchByValueDuplicate(Node* head, int key);


void insertAtHead(Node* &head, int val)
{
    Node* newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}

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


int searchByValueUnique(Node* head, int key)
{
    int cnt = 1;
    Node* temp = head;
    if (temp == NULL) return -1;

    while (temp->value != key)
    {
        if (temp->Next == NULL) return - 1;
        temp = temp->Next;
        cnt++;
    }
    return cnt;
}

void searchByValueDuplicate(Node* head, int key)
{
    int cnt = 1;
    Node* temp = head;
    int flag = 0;
    int sz = countLength(head);
    int positions[sz+1], k = 1;

    while (temp != NULL)
    {
        if (temp->value == key)
        {
            positions[k] = cnt;
            k++;
            flag = 1;
        }
        temp = temp->Next;
        cnt++;
    }

    if (flag == 0)
    {
        cout << "The value is not in the list yet!" << endl;
    }
    else
    {
        positions[0] = k;
        cout << "The number is at position: ";
        for (int i = 1; i < positions[0]; i++)
        {
            cout << positions[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int value, position;

    Node* head = NULL;

    cout << "Choice 1: Insert at Head" << endl;
    cout << "Choice 2: Insert at Tail" << endl;
    cout << "Choice 3: Insert at specific position" << endl;
    cout << "Choice 4: Search a value (Unique List)" << endl;
    cout << "Choice 5: Search a value (Duplication Enable List)" << endl;
    cout << "Choice 0: Exit" << endl;
    cout << endl;

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
        case 4:
            cout << "Enter the value to search: ";
            cin >> value;
            position = searchByValueUnique(head, value);
            if (position != -1)
            {
                cout << "The number is at position " << position << endl;
            }
            else
            {
                cout << "The number is not yet in the list" << endl;
            }
        case 5:
            cout << "Enter the value to search: ";
            cin >> value;
            searchByValueDuplicate(head, value);
        default:
            break;
        }
        cout << "Next choice: ";
        cin >> choice;
    }

    cout << endl << "List: ";
    display(head);
    cout << endl << endl;

    cout << "Length: " << countLength(head) << endl;

    return 0;
}
