#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

struct Array
{
    int arr[1000];
};


// Function References
int countLength(Node *head);
void displayList(Node *head);
void insertionAtTail(Node *&head, int value);
void insertionAtHead(Node *&head, int value);
void insertionAtSpecificPosition(Node *&head, int position, int value);
int searchByValueUnique(Node *head, int key);
Array searchByValueDuplicate(Node *head, int key);
void insertionAfterASpecificValueUnique(Node *&head, int searchValue, int insertionValue);
void insertionAfterASpecificValueDuplicate(Node *&head, int searchValue, int insertionValue);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deletetionAtSpecificPosition(Node *&head, int position);
void deletionByValueUnique(Node *&head, int value);
void deletionByValueDuplicate(Node *&head, int value);



// Count the Size the of Linked List
int countLength(Node *head)
{
    int cnt = 0;;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
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


// Insert Node at Tail
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
    newNode->prev = temp;
    temp->next = newNode;
}


// Insert Node at Head
void insertionAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}


// Insert a at a specific position
void insertionAtSpecificPosition(Node *&head, int position, int value)
{
    if (position == 1)
    {
        insertionAtHead(head, value);
    }
    else if (position == countLength(head) + 1)
    {
        insertionAtTail(head, value);
    }
    else if (position > 1 && position <= countLength(head))
    {
        Node *temp = head;
        Node *newNode = new Node(value);
        int i = 1;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next = newNode;

    }
    else
    {
        cout << "Invalid Position" << endl;
    }
}


// Search by Value (Unique List)
int searchByValueUnique(Node *head, int key)
{
    int cnt = 0;
    bool found = false;
    while (head != NULL)
    {
        cnt++;
        if (head->value == key)
        {
            found = true;
            break;
        }
        head = head->next;

    }
    if (found)
    {
        return cnt;
    }
    else
    {
        return -1;
    }
}


// Search by Value in Duplication Enable List
Array searchByValueDuplicate(Node *head, int key)
{
    Array positions;
    int i = 1, k = 1;
    int found = false;
    while (head != NULL)
    {
        if (head->value == key)
        {
            positions.arr[k] = i;
            k++;
            found = true;
        }
        head = head->next;
        i++;
    }
    if (!found)
    {
        positions.arr[0] = -1;
    }
    else
    {
        positions.arr[0] = k;
    }

    return positions;
}


// Insertion after a specific value (Unique List)
void insertionAfterASpecificValueUnique(Node *&head, int searchValue, int insertionValue)
{
    int position = searchByValueUnique(head, searchValue);
    if (position == -1)
    {
        cout << "Value is not yet in the List" << endl;
    }
    else
    {
        insertionAtSpecificPosition(head, position + 1, insertionValue);
    }
}


// Insertion After A Specific Value in Duplication enable List
void insertionAfterASpecificValueDuplicate(Node *&head, int searchValue, int insertionValue)
{
        Array positions = searchByValueDuplicate(head, searchValue);
        int len = positions.arr[0];
        if (len == -1)
        {
            cout << "Value not Found!" << endl;
        }
        else
        {
            for (int i = 1; i < len; i++)
            {
                insertionAtSpecificPosition(head, positions.arr[i] + 1, insertionValue);
                for (int j = i+1; j < len; j++)
                {
                    positions.arr[j]++;
                }
            }
        }
}


// Deletion at Head
void deletionAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "The Linked List is Empty" << endl;
        return;
    }
    if (countLength(head) == 1)
    {
        Node *temp = head;
        head = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        Node *save = temp->next;
        save->prev = NULL;
        head = save;
        delete temp;

    }

}


// Deletion At Tail
void deletionAtTail(Node *&head)
{
    if (head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
        return;
    }

    if (countLength(head) == 1)
    {
        deletionAtHead(head);
    }
    else
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *delNode = temp->next;
        temp->next = NULL;
        delete delNode;
    }

}




// Deletion At Specific Position
void deletetionAtSpecificPosition(Node *&head, int position)
{
    if (head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
    }
    else if (position == 1)
    {
        deletionAtHead(head);
    }
    else if (position == countLength(head))
    {
        deletionAtTail(head);
    }
    else if (position > 1 && position < countLength(head))
    {
        Node *temp = head;
        int i = 1;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        Node *save = temp->next;
        temp->next = save->next;
        delete save;
    }
    else
    {
        cout << "Position is Out of Range" << endl;
    }
}


// Deletion by Value (Unique List)
void deletionByValueUnique(Node *&head, int value)
{
    int position = searchByValueUnique(head, value);
    if (position == -1)
    {
        cout << "Value not found!" << endl;
        return;
    }

    deletetionAtSpecificPosition(head, position);
}


void deletionByValueDuplicate(Node *&head, int value)
{
    Array positions = searchByValueDuplicate(head, value);
    int len = positions.arr[0];
    if (len == -1)
    {
        cout << "Value not Found!" << endl;
    }
    else
    {
        for (int i = 1; i < len; i++)
        {
            deletetionAtSpecificPosition(head, positions.arr[i]);
            for (int j = i+1; j < len; j++)
            {
                positions.arr[j]--;
            }
        }
    }
}



int main()
{
    int value, choice, position;

    Node *head = NULL;

    cout << "Choice 1: Counting the Size" << endl;
    cout << "Choice 2: Display List" << endl;
    cout << "Choice 3: Insertion at Head" << endl;
    cout << "Choice 4: Insertion at Tail" << endl;
    cout << "Choice 5: Insertion at Specific Position" << endl;
    cout << "Choice 6: Search a value (Unique List)" << endl;
    cout << "Choice 7: Search a value (Duplication enabled List)" << endl;
    cout << "Choice 8: Insertion after a specific value (Unique List)" << endl;
    cout << "Choice 9: Insertion after a specific value (Duplication enabled List)" << endl;
    cout << "Choice 10: Deletion at Head" << endl;
    cout << "Choice 11: Deletion at Tail" << endl;
    cout << "Choice 12: Deletion at a Specific Position" << endl;
    cout << "Choice 13: Deletion by Value (Unique List)" << endl;
    cout << "Choice 14: Deletion by Value(Duplication enabled List)" << endl;

    cout << endl;


    do
    {
        int searchValue;
        cout << "Next Choice: ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            int cnt;
            cnt = countLength(head);
            cout << "Size: " << cnt << endl;
            cout << endl;
            break;
        case 2:
            displayList(head);
            cout << endl << endl;
            break;
        case 3:
            cout << "Enter the value: ";
            cin >> value;
            insertionAtHead(head, value);
            cout << endl;
            break;
        case 4:
            cout << "Enter the value: ";
            cin >> value;
            insertionAtTail(head, value);
            cout << endl;
            break;
        case 5:
            cout << "Enter the Position: ";
            cin >> position;
            cout << "Enter the value: ";
            cin >> value;
            insertionAtSpecificPosition(head, position, value);
            cout << endl;
        case 6:
            int pos;
            cout << "Enter the value to search (Unique List): ";
            cin >> searchValue;
            pos = searchByValueUnique(head, searchValue);
            if (pos == -1)
            {
                cout << "The Value is Not yet in the List" << endl;
            }
            else
            {
                cout << "The value is at position " << pos << endl;
            }
            cout << endl;
            break;
        case 7:
            int searchVal;
            cout << "Enter the value to search (Unique List): ";
            cin >> searchVal;
            Array positions;
            positions = searchByValueDuplicate(head, searchVal);
            int len;
            len = positions.arr[0];
            if (len == -1)
            {
                cout << "The value not found!" << endl;
            }
            else
            {
                cout << "Value found at position: ";
                for (int i = 1; i < len; i++)
                {
                    cout << positions.arr[i] << " ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        case 8:
            cout << "Enter the Search Value: ";
            cin >> searchValue;
            cout << "Enter the vale to insert: ";
            cin >> value;
            insertionAfterASpecificValueUnique(head, searchValue, value);
            cout << endl;
            break;
        case 9:
            cout << "Enter the Search Value: ";
            cin >> searchValue;
            cout << "Enter the vale to insert: ";
            cin >> value;
            insertionAfterASpecificValueDuplicate(head, searchValue, value);
            cout << endl;
            break;
        case 10:
            deletionAtHead(head);
            cout << endl;
        case 11:
            deletionAtTail(head);
            cout << endl;
            break;
        case 12:
            cout << "Enter the position you want to delete: ";
            cin >> position;
            deletetionAtSpecificPosition(head, position);
            cout << endl;
            break;
        case 13:
            cout << "Enter the value you want to Delete (Unique List): ";
            cin >> value;
            deletionByValueUnique(head, value);
            cout << endl;
            break;
        case 14:
            cout << "Enter the value you want to Delete (Duplication Enable): ";
            cin >> value;
            deletionByValueDuplicate(head, value);
            cout << endl;
            break;
        default:
            break;
        }
    }
    while (choice != 0);

    return 0;
}
