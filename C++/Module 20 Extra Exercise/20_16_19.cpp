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

// References
void displayList(Node *head);
void insert_node(Node*& head, int value);
void insert_node_by_position(Node*& head, int position, int value);
void insertionAtHead(Node *&head, int value);
void insertionAtTail(Node *&head, int value);
int countLength(Node *head);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void delete_node_by_position(Node*& head, int position);



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





/*===================================================================================*/



// Solution to the Question number 20_16
void insert_node(Node*& head, int value)
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


// Solution to the Question number 20_17
void insert_node_by_position(Node*& head, int position, int value)
{
    if (position == 0)
    {
        insertionAtHead(head, value);
    }
    else if (position == countLength(head))
    {
        insertionAtTail(head, value);
    }
    else if (position > 0 && position < countLength(head))
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


// Solution to the Question number 20_18
void delete_node_by_position(Node*& head, int position)
{
    if (head == NULL)
    {
        cout << "The Linked List is Empty!" << endl;
    }
    else if (position == 0)
    {
        deletionAtHead(head);
    }
    else if (position == countLength(head) - 1)
    {
        deletionAtTail(head);
    }
    else if (position > 0 && position < countLength(head) - 1)
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


// Solution to the Question number 20_19
void move_head(Node*& head)
{
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* newHead = head->next;
    Node* saveNode = head;
    saveNode->prev = temp;
    saveNode->next = NULL;
    temp->next = saveNode;
    newHead->prev = NULL;
    head = newHead;
}


int main()
{
    Node* head = NULL;
    insert_node(head, 5);
    insert_node(head, 2);
    insert_node(head, 9);
    insert_node(head, 10);
    insert_node(head, 15);

    displayList(head);
    cout << endl;
    cout << endl;

    move_head(head);
    cout << endl;

    displayList(head);
    cout << endl;

    return 0;
}
