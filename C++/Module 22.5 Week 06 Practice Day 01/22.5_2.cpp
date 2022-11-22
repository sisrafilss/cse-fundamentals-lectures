
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* Next;
    Node(char value)
    {
        this->value = value;
        this->Next = NULL;
    }
};

struct Array
{
    int arr[1000];
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


void removeDuplicates(Node*& head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        Array positions = searchByValueDuplicate(head, temp->value);
        cout << "Arr Lengh: " << positions.arr[0] << endl;
        for (int i = 2; i <= positions.arr[0]; i++)
        {
            deletetionAtSpecificPosition(head, positions.arr[i]);
        }
        if (temp->Next != NULL) temp = temp->Next;

    }
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

    removeDuplicates(head);

    display(head);


    return 0;
}
