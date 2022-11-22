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


void insertAtTail(Node* &head, char val)
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


void rotate_counter_clockwise(Node*& head, int k)
{
    Node* temp = head;
    int cnt = 1;
    while (cnt < k) // k = 3
    {
        // 5->6->7->8->1->2->2->4
        temp = temp->Next;
        cnt++;
    }

    Node* newHead = temp->Next;
    Node* lastNode = temp;

    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = head;
    lastNode->Next = NULL;
    head = newHead;
}


int main()
{
    int n;
    Node* head = NULL;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertAtTail(head, x);
    }

    int k;
    cin >> k;
    rotate_counter_clockwise(head, k);

    display(head);


    return 0;
}
