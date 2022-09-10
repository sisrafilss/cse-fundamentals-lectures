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

struct Test
{
    int position[1000];
};

void insertAtHead(Node* &head, int val);
void insertAtTail(Node* &head, int val);
void display(Node* n);
int countLength(Node* head);
void insertionAtSpecificPosition(Node* &head, int pos, int val);
int searchByValueUnique(Node* head, int key);
void searchByValueDuplicate(Node* head, int key);
Test searchByValueDuplicateReturn(Node* head, int key);
void insertionByValueUnique(Node* &head, int searchValue, int insertionValue);
void deletionAtHead(Node* &head);
void deletionAtTail(Node* &head);
void deletionAtSpecificPosition(Node* &head, int position);
void deletionByValueUnique(Node* head, int value);


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


Test searchByValueDuplicateReturn(Node* head, int key)
{
    int cnt = 1, k = 1;
    Node* temp = head;

    Test T;

    while (temp != NULL)
    {
        if (temp->value == key)
        {
            T.position[k] = cnt;
            k++;
        }
        temp = temp->Next;
        cnt++;
    }
    T.position[0] = k;
   return T;
}

void insertionByValueUnique(Node* &head, int searchValue, int insertionValue)
{
    int position = searchByValueUnique(head, searchValue);
    insertionAtSpecificPosition(head, position+1, insertionValue);
}


void deletionAtHead(Node* &head)
{
    Node* temp = head;
    if (temp != NULL)
    {
        head = temp->Next;
        delete temp;
    }
    else
    {
        cout << "There is no value in the Linked List" << endl;
    }
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


void deletionByValueUnique(Node* head, int value)
{
    // Search the value in the unique list and return the position of that value or -1 if not found.
    int position = searchByValueUnique(head, value);

    if (position != -1)
    {
        // Take the position and delete the node at that position
        deletionAtSpecificPosition(head, position);
    }
    else
    {
        cout << "Value Not Found!" << endl;
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
    cout << "Choice 6: Insert after a specific value (Unique List)" << endl;
    cout << "Choice 7: Deletion at Head" << endl;
    cout << "Choice 8: Deletion at Tail" << endl;
    cout << "Choice 9: Deletion at Specific Position" << endl;
    cout << "Choice 10: Deletion by Value" << endl;
    cout << "Choice 20: See the List" << endl;
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
                break;
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
                break;
            case 5:
                cout << "Enter the value to search: ";
                cin >> value;
                Test T;
                T = searchByValueDuplicateReturn(head, value);
                if (T.position[0] == 1)
                {
                    cout << "The number is not yet in the list" << endl;
                }
                else
                {
                    cout << "The number is at position: ";
                    for (int i = 1; i < T.position[0]; i++)
                    {
                        cout << T.position[i] << " ";
                    }
                    cout << endl;
                }
                break;
            case 6:
                int searchValue, insertionValue;
                cout << "Enter the value to search: ";
                cin >> searchValue;
                cout << "Enter the value to insert: ";
                cin >> insertionValue;
                insertionByValueUnique(head, searchValue, insertionValue);
                break;
            case 7:
                deletionAtHead(head);
                break;
            case 8:
                deletionAtTail(head);
                break;
            case 9:
                if (head == NULL)
                {
                    cout << "The List is Empty!" << endl;
                    break;
                }
                cout << "Enter the position: ";
                cin >> position;
                deletionAtSpecificPosition(head, position);
                break;
            case 10:
                cout << "Enter the value to delete: ";
                cin >> value;
                deletionByValueUnique(head, value);
                break;
            case 20:
                cout << endl << "List: ";
                display(head);
                cout << endl;
                cout << "Length: " << countLength(head) << endl << endl;
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

    cout << "Length: " << countLength(head) << endl;

    return 0;
}
