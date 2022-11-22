#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* Next;
    Node(int value)
    {
        this->value = value;
        this->Next = NULL;
    }

};

struct Array
{
    int arr[1000];
};

// References
int countSize(Node* node);
void display(Node* head);
void insertionAtHead(Node* &head, int value);
void insertionAtTail(Node* &head, int value);
void insertionAtSpecificPosition(Node* &head, int position, int value);
int searchByValueUnique(Node* head, int value);
void insertionAfterASpecificValue(Node* &head, int searchValue, int insertionValue);
void deletionAtHead(Node* &head);
void deletionAtTail(Node* &head);
void deletetionAtSpecificPosition(Node* &head, int position);
void deletionByValueUnique(Node* &head, int value);
Array searchByValueDuplicate(Node* head, int searchValue);
void insertionAfterASpecificValueDuplicate(Node* &head, int key, int newValue);
void deletionByValueDuplicate(Node* &head, int delValue);


int countSize(Node* node)
{
    int cnt = 0;
    while (node != NULL)
    {
        node = node->Next;
        cnt++;
    }
    return cnt;
}


void display(Node* head)
{
    Node* temp = head;
    if (temp == NULL)
    {
        cout << "Linked List is Empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->Next != NULL) cout << " -> ";
        temp = temp->Next;
    }
    cout << endl;
}


void insertionAtHead(Node* &head, int value)
{
    Node* newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->Next = head;
    head = newNode;

}

void insertionAtTail(Node* &head, int value)
{
    Node* newNode = new Node(value);
    Node* temp = head;
    if (temp == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}


void insertionAtSpecificPosition(Node* &head, int position, int value)
{
    int i = 1;
    Node* temp = head;

    if (position > 0 && position <= countSize(head))
    {
        if (position == 1)
        {
            insertionAtHead(head, value);
        }
        else
        {
           while (i < position - 1)
            {
                temp = temp->Next;
                i++;
            }
            Node* newNode = new Node(value);
            newNode->Next = temp->Next;
            temp->Next = newNode;
        }
    }
    else
    {
        cout << "Invalid Position" << endl;
    }


}


int searchByValueUnique(Node* head, int key)
{
    int position = 1, flag = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            flag = 1;
            break;
        }
        position++;
        temp = temp->Next;
    }
    if (flag == 0)
    {
        return -1;
    }
    else
    {
        return position;
    }

}


void insertionAfterASpecificValue(Node* &head, int searchValue, int insertionValue)
{
    int position = searchByValueUnique(head, searchValue);
    if (position == -1)
    {
        cout << "Value not Found!" << endl;
    }
    else
    {
        insertionAtSpecificPosition(head, position + 1, insertionValue);
    }

}


void deletionAtHead(Node* &head)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;;
        return;
    }
    Node* delValue = head;
    head = head->Next;
    delete delValue;
}


void deletionAtTail(Node* &head)
{
    Node* temp = head;
    int length = countSize(head);
    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;;
    }
    else
    {
        if (length == 1)
        {
            deletionAtHead(head);
        }
        else
        {
            int i = 1;
            while (i < length - 1)
            {
                temp = temp->Next;
                i++;
            }

            Node* delNode = temp->Next;
            temp->Next = NULL;
            delete delNode;
        }
    }

}


void deletetionAtSpecificPosition(Node* &head, int position)
{
    Node* temp = head;
    int i = 1;

    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;;
    }
    else
    {
        if (position == 1)
        {
            deletionAtHead(head);
        }
        else
        {
            while (i < position - 1)
            {
                temp = temp->Next;
                i++;
            }
            Node* delNode = temp->Next;
            Node* nextNode = delNode->Next;
            temp->Next = nextNode;
        }
    }
}


void deletionByValueUnique(Node* &head, int value)
{
    int position;
    position = searchByValueUnique(head, value);
    if (position != -1)
    {
        deletetionAtSpecificPosition(head, position);
    }
    else
    {
        cout << "The value is not yet in the list" << endl;
    }
}


Array searchByValueDuplicate(Node* head, int searchValue)
{
    struct Array positions;
    Node* temp = head;
    int cnt = 1, k = 1, flag = 0;

    while (temp != NULL)
    {
        if (temp->value == searchValue)
        {
            positions.arr[k] = cnt;
            k++;
            flag = 1;
        }
        temp = temp->Next;
        cnt++;
    }
    if (flag == 0)
    {
        positions.arr[0] = 0;
    }
    else
    {
        positions.arr[0] = k;
    }

    return positions;

}


void insertionAfterASpecificValueDuplicate(Node* &head, int key, int newValue)
{
    Array positions;
    positions = searchByValueDuplicate(head, key);
    if (positions.arr[0] == 0)
    {
        cout << "List is Empty!" << endl;
        return;
    }

    int len = positions.arr[0];
    for (int i = 1; i < len; i++)
    {
        insertionAtSpecificPosition(head, positions.arr[i] + 1, newValue);
        for (int j = i; j < len; j++)
        {
            positions.arr[j]++;
        }
    }

}


void deletionByValueDuplicate(Node* &head, int delValue)
{
    Array positions;
    positions = searchByValueDuplicate(head, delValue);
    if (positions.arr[0] == 0)
    {
        cout << "Linked List is Empty!" << endl;
        return;
    }

    int len = positions.arr[0];
    for (int i = 1; i < len; i++)
    {
        deletetionAtSpecificPosition(head, positions.arr[i]);
        for (int j = i; j < len; j++)
        {
            positions.arr[j]--;
        }
    }
}




int main()
{
    int value, choice, position;

    Node* head = NULL;

    cout << "Choice 1: Counting the Size" << endl;
    cout << "Choice 2: Display Linked List" << endl;
    cout << "Choice 3: Insertion at Head" << endl;
    cout << "Choice 4: Insertion at Tail" << endl;
    cout << "Choice 5: Insertion at Specific Position" << endl;
    cout << "Choice 6: Search by value (Unique List)" << endl;
    cout << "Choice 7: Search a value (Duplication enabled List)" << endl;
    cout << "Choice 8: Insertion After a Specific Value" << endl;
    cout << "Choice 9: Insertion after a specific value (Duplication enabled List)" << endl;
    cout << "Choice 10: Deletion at Head" << endl;
    cout << "Choice 11: Deletion at Tail" << endl;
    cout << "Choice 12: Deletion at a Specific Position" << endl;
    cout << "Choice 13: Deletion by Value (Unique List)" << endl;
    cout << "Choice 14: Deletion by Value(Duplication enabled List)" << endl;
    cout << endl;


    do
    {
        cout << "Next Choice: ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            int sz;
            sz = countSize(head);
            cout << "Size: " << sz << endl << endl;;
            break;
        case 2:
            display(head);
            cout << endl;
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
            if (head == NULL)
            {
                cout << "Linked List is Empty" << endl << endl;
                break;
            }
            cout << "Enter the position: ";
            cin >> position;
            if (position <= 0 || position >= countSize(head))
            {
                cout << "Invalid Position" << endl << endl;
                break;
            }
            cout << "Enter the value: ";
            cin >> value;
            insertionAtSpecificPosition(head, position, value);
            cout << endl;
            break;
        case 6:
            if (head == NULL)
            {
                cout << "Linked List is Empty" << endl << endl;
                break;
            }
            cout << "Enter the value to Search: ";
            cin >> value;
            position = searchByValueUnique(head, value);
            if (position == -1)
            {
                cout << "The value is not yet in the List" << endl;
            }
            else
            {
                cout << "The value is at position: " << position << endl;
            }
            cout << endl;
            break;
        case 7:
            int key;
            cout << "Enter the value to search (Duplication Enable): ";
            cin >> key;
            Array positions;
            positions = searchByValueDuplicate(head, key);


            if (positions.arr[0] == 0)
            {
                cout << "Value not found!" << endl;
            }
            else
            {
                int len = positions.arr[0];
                cout << "Value found at positions: ";
                for (int i = 1; i < len; i++)
                {
                    cout << positions.arr[i];
                    if (i < len - 1) cout << ", ";
                }
                cout << endl;
            }

            cout << endl;
            break;
        case 8:
            int searchValue;
            cout << "Enter the Search Value: ";
            cin >> searchValue;
            cout << "Enter the value to insert: ";
            cin >> value;
            insertionAfterASpecificValue(head, searchValue, value);
            cout << endl;
            break;
        case 9:
            cout << "Enter the Search Value (Duplication Enable): ";
            cin >> value;
            int newValue;
            cout << "Enter the new Value to Enter (Duplication Enable): ";
            cin >> newValue;
            insertionAfterASpecificValueDuplicate(head, value, newValue);
            cout << endl;
            break;
        case 10:
            deletionAtHead(head);
            cout << endl;
            break;
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
            cout << "Enter the Value you want to delete: ";
            cin >> searchValue;
            deletionByValueUnique(head, searchValue);
            cout << endl;
            break;
        case 14:
            int delValue;
            cout << "Enter the Value you want to delete (Duplication Enable): ";
            cin >> delValue;
            deletionByValueDuplicate(head, delValue);
            cout << endl;
            break;
        default:
            break;
        }
    }
    while (choice != 0);

    return 0;
}
