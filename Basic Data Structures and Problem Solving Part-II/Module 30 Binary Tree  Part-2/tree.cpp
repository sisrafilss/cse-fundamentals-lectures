#include<bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode* leftChild;
    treeNode* rightChild;
    // Constructor
    treeNode(int val)
    {
        data = val;
        leftChild = NULL;
        rightChild = NULL;
    }
};

// Prototype
void printTree(treeNode* root, int level);
void spacePrint(int level);
void inOrder(treeNode* root, string*& chk);
void preOrder(treeNode* root, string*& chk);
void postOrder(treeNode* root, string*& chk);


void printTree(treeNode* root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << endl;
        return;
    }
    else
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->data << endl;
    }

    spacePrint(level);
    cout << "Left: ";
    printTree(root->leftChild, level + 1);

    spacePrint(level);
    cout << "Right: ";
    printTree(root->rightChild, level + 1);
}

// print Space
void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

void inOrder(treeNode* root, string& chk)
{
    if (root == NULL)
        return;

    inOrder(root->leftChild, chk);
    chk += to_string(root->data);
    inOrder(root->rightChild, chk);
}

void preOrder(treeNode* root, string& chk)
{
    if (root == NULL)
        return;

    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

void postOrder(treeNode* root, string& chk)
{
    if (root == NULL)
        return;

    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}


int main()
{
    int n;
    cin >> n;
    treeNode* allNodes[n];
    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }
    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;

        allNodes[i]->data = value;

        if (left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }
        if (right != -1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }

    cout << endl;
    printTree(allNodes[0], 0);
    cout << endl;

    string inOrderTraversal = "";
    string preOrderTraversal = "";
    string postOrderTraversal = "";

    inOrder(allNodes[0], inOrderTraversal);
    preOrder(allNodes[0], preOrderTraversal);
    postOrder(allNodes[0], postOrderTraversal);

    cout << "In Order Traversal: " << inOrderTraversal << endl;
    cout << "Pre Order Traversal: " << preOrderTraversal << endl;
    cout << "Post Order Traversal: " << postOrderTraversal << endl;

    return 0;
}




/*
Input:
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1


Output:
Root: 0
Left:
    Root: 1
    Left: 3
    Right: 4
Right:
    Root: 2
    Left:
        Root: 5
        Left: 7
        Right: 8
    Right: 6


*/














