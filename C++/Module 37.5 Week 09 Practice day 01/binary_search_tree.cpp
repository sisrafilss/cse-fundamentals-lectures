#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* currentNode = q.front();
        q.pop();
        cout << currentNode->val << " ";
        if (currentNode != NULL)
        {
            if (currentNode->left != NULL)
            {
                q.push(currentNode->left);
            }
            if (currentNode->right != NULL)
            {
                q.push(currentNode->right);
            }
        }
        else
        {
            cout << endl;
        }
    }
}

// Insertion in BST using Call by Reference
void insertBSTByR(Node*& root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }
    if (val < root->val) insertBSTByR(root->left, val);
    else if (val > root->val) insertBSTByR(root->right, val);
}

// Insertion in BST using call by value and return the updated root
Node* insertBSTByV(Node* root, int val)
{
    Node* newNode = new Node(val);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    if (val < root->val) root->left = insertBSTByV(root->left, val);
    else if (val > root->val) root->right = insertBSTByV(root->right, val);

    return root;
}

Node* insertHeightBalancedBST(int l, int r, int arr[])
{
    if (l > r) return NULL;

    int mid = l + (r - l) / 2;
    Node* newNode = new Node(arr[mid]);
    newNode->left = insertHeightBalancedBST(l, mid - 1, arr);
    newNode->right = insertHeightBalancedBST(mid + 1, r, arr);

    return newNode;
}

 Node* findMaxNode(Node* root)
    {
        if (root->left == NULL && root->right == NULL)
        {
            return root;
        }
        findMaxNode(root->right);
    }

int main()
{
    Node* root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertBSTByR(root, x);
    }



    cout << endl;
    levelOrderTraversal(root);

    cout << endl;
    Node* maxNode = findMaxNode(root);

    cout << "Maximum Node Value = " << maxNode->val << endl;

    return 0;
}

/*
7
5 4 7 2 6 8 3

7
1 2 3 4 5 6 7
*/
