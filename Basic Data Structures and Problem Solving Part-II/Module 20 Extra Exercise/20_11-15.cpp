#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};


// References
int count_length(Node* head);
void  insert_node(Node* &head, int value);
void insert_node_by_position(Node* &head, int position, int value);
void display(Node* head);
void deletionAtHead(Node* &head);
void delete_node_by_position(Node*& head, int position);





void display(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;
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
    head = head->next;
    delete delValue;
}


// Solution to the question number 20_11
void  insert_node(Node* &head, int value)
{
    Node* newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}


// Solution to the question number 20_12
void insert_node_by_position(Node* &head, int position, int value)
{
    int cnt = 0;
    Node* temp = head;
    Node* newNode = new Node(value);

    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else if (count_length(head) == position + 1)
    {
        insert_node(head, value);
    }
    else if (position > 0 && position <= count_length(head))
    {
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }
        Node* save = temp->next;
        newNode->next = save;
        temp->next = newNode;

    }
    else
    {
        cout << "Invalid Position" << endl;
    }
}




// Solution to the question number 20_13
void delete_node_by_position(Node*& head, int position)
{
    Node* temp = head;
    int i = 0;

    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;;
    }
    else if (position > count_length(head) - 1 || position < 0)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        if (position == 0)
        {
            deletionAtHead(head);
        }
        else
        {
            while (i < position - 1)
            {
                temp = temp->next;
                i++;
            }
            Node* delNode = temp->next;
            Node* nextNode = delNode->next;
            temp->next = nextNode;
        }
    }
}


// Solution to the Question number 20_14
int count_length(Node* head)
{
    int cnt = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }

    return cnt;
}



// Answer to the Question number 20_15
void move_tail(Node*& head)
{
    Node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node* tail = temp->next;
    tail->next = head;
    temp->next = NULL;
    head = tail;
}

int main()
{
    Node* head = NULL;
    insert_node(head, 5);
    insert_node(head, 10);
    insert_node(head, 16);
    insert_node(head, 15);
    insert_node(head, 20);
    insert_node(head, 30);

    display(head);
    cout << endl;

    move_tail(head);
    cout << endl;

    display(head);

    return 0;
}
