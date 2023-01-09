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

// References
void display(Node* n);
void insertAtTail(Node* &head, int value);
void insertAtHead(Node* &head, int value);
int countLength(Node* head);
void insertAtSpecificPosition(Node* &head, int position, int value);
int searchByValueUnique(Node* head, int value);
void searchByValueDuplicate(Node* head, int key);


void display(Node* n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL) cout << " -> ";
        n = n->Next;
    }
}

void insertAtTail(Node* &head, int value)
{
    Node* newNode = new Node(value);
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

void insertAtHead(Node* &head, int value)
{
    Node* newNode = new Node(value);
    newNode->Next = head;
    head = newNode;

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

void insertAtSpecificPosition(Node* &head, int position, int value)
{
    Node* newNode = new Node(value);
    int i = 0;
    Node* temp = head;

    while (i < position - 2)
    {
        temp = temp->Next;
        i++;
    }
    newNode->Next = temp->Next;
    temp->Next = newNode;
}


int searchByValueUnique(Node* head, int key)
{
    int position = 1;
    Node* temp = head;
    if (temp == NULL) return -1;

    while (temp->value != key)
    {
        if (temp->Next == NULL) return -1;
        temp = temp->Next;
        position++;
    }
    return position;
}

void searchByValueDuplicate(Node* head, int key)
{
    Node* temp = head;
    int cnt = 1;
    int length = countLength(temp);
    int positions[length+1], k = 1;
    int flag = 0;
    while (cnt <= length)
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
    positions[0] = k;
    if (flag != 1)
    {
        cout << "The value is not yet in the list" << endl;
    }
    else
    {
        cout << "Value found at position: ";
        for (int i = 1; i < positions[0]; i++)
        {
            cout << positions[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    Node* head = NULL;

    insertAtTail(head, 50);
    insertAtTail(head, 50);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    insertAtTail(head, 70);

    insertAtHead(head, 40);

    insertAtSpecificPosition(head, 4, 55);

    cout << "Length " << countLength(head) << endl;

    searchByValueDuplicate(head, 50);

    /*
    Choice 1: Insert at Head
    Choice 2: Insert at Tail
    Choice 3: Insert at specific position
    Choice 4: Search a value (Unique List)
    Choice 5: Search a value (Duplication Enable List)

    */

    display(head);

    return 0;
}
