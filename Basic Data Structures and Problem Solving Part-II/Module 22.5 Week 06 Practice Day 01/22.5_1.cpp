#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    char c;
    Node* Next;
    Node(char c)
    {
        this->c = c;
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
        cout << n->c << " ";
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

bool isPalindrom(Node* head)
{
    Node* temp = head;
    int length = countLength(head);
    char word[length];

    for (int i = 0; i < length; i++)
    {
        word[i] = temp->c;
        temp = temp->Next;
    }

    bool palindrom = true;
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        if (word[i] != word[j])
        {
            palindrom = false;
        }
    }

    return palindrom;
}


int main()
{
    int n;
    Node* head = NULL;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        insertAtTail(head, c);
    }

    if(isPalindrom(head))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    return 0;
}
