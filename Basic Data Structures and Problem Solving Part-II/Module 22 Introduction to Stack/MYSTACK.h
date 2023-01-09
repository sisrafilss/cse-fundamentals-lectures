#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* prev;
    Node* next;
    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

class Stack
{
    Node* head;
    Node* top;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH
    void push(int value)
    {
        Node* newNode = new Node(value);

        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }

        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }

    // POP
    int pop()
    {
        int chk = -1;
        Node* delNode = top;
        if (top == NULL) // There is no element in the Stack
        {
            cout << "Stack Underflow!" << endl;
            return chk;
        }

        if (head == top) // Only only element in the Stack
        {
            head = top = NULL;
        }
        else // More than one elements
        {

            top = delNode->prev;
            top->next = NULL;
        }

        chk = delNode->value;
        count--;
        delete delNode;
        return chk;
    }

    // EMPTY
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    // SIZE
    int size()
    {
        return count;
    }

    // TOP
    int Top()
    {
        int chk;
        if (top == NULL)
        {
            cout << "Stack Underflow | There is no element in Top" << endl;
            chk = -1;
        }
        else
        {
            chk = top->value;
        }
        return chk;
    }
};
