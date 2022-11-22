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


Node* reverseNonRecursive(Node* &head)
{
    Node* prev = NULL;
    Node* current = head;
    if (current == NULL)
    {
        cout << "The Linked List is Empty" << endl;;
        return current;
    }
    Node* next = head->Next;

    while (true)
    {
        current->Next = prev;
        prev = current;
        current = next;
        if (current == NULL)
            break;
        next = next->Next;
    }
    return prev;
}



void reverseKNodes(Node* head, int k)
{
    Node* temp = head;
    Node* cur_head = head;

    int cnt = 0;
    Node* saved;
    Node* nextSaved;
    Node* newHead = NULL;
    Node* lastNode;

    while(temp->Next != NULL)
    {
        temp = temp->Next;
        cnt++;
        if (cnt == k)
        {
            saved = temp;
            nextSaved = temp->Next;
            saved->Next = NULL;
            if (newHead == NULL)
            {
                newHead = reverseNonRecursive(cur_head);
                lastNode = head;
            }
            else
            {
                lastNode->Next = reverseNonRecursive(cur_head);
                lastNode = cur_head;
            }

            cnt = 0;
            temp = nextSaved;
        }
    }

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

    reverseKNodes(head, k);

    display(head);


    return 0;
}
