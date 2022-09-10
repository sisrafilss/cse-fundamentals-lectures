#include<bits/stdc++.h>
using namespace std;

template <typename N> class Node
{
public:
    N value;
    Node* next;

    Node(N value)
    {
        this->value = value;
        this->next = NULL;
    }
};

template <typename Q> class Queue
{
    Node<Q>* front;
    Node<Q>* rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue => push
    void push(Q value)
    {
        Node<Q>* newNode = new Node<Q>(value);

        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = rear->next;
    }


    // dequeue => pop
    Q pop()
    {
        Q val;
        if (front == NULL)
        {
            return val;
        }
        Node<Q>* delNode = front;
        val = front->value;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete delNode;
        return val;
    }

    // front
    Q Front()
    {
        Q val;
        if (front == NULL)
        {
            cout << "Queue Underflow | Queue is Empty!" << endl;
            return val;
        }
        val = front->value;
        return val;
    }

    // Back
    Q Back()
    {
        Q val;
        if (rear == NULL)
        {
            cout << "Queue Underflow | Queue is Empty!" << endl;
            return val;
        }
        val = rear->value;
        return val;
    }

    // empty
    bool empty()
    {
        if (front == NULL && rear == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
