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
void levelOrder(treeNode* root, string& chk);
void printLeftNonLeaves(treeNode* root);
void printLeaves(treeNode* root);
void printRightNonLeaves(treeNode* root);
void boundaryTraversal(treeNode* root);
int searchPosition(int inorder[], int searchValue, int start, int end);
treeNode* buildTreePreIn(int preorder[], int inorder[], int start, int end);
treeNode* inputLevelOrder();


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


// In Order Traversal
void inOrder(treeNode* root, string& chk)
{
    if (root == NULL)
        return;

    inOrder(root->leftChild, chk);
    chk += to_string(root->data);
    inOrder(root->rightChild, chk);
}


// Pre Order Traversal
void preOrder(treeNode* root, string& chk)
{
    if (root == NULL)
        return;

    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}


// Post Order Traversal
void postOrder(treeNode* root, string& chk)
{
    if (root == NULL)
        return;

    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}


// Level order traversal
void levelOrder(treeNode* root, string& chk)
{
    if (root == NULL) return;

    queue<treeNode*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        treeNode* currentNode = q.front();
        q.pop();

        if (currentNode != NULL)
        {
            chk += to_string(currentNode->data);
            if (currentNode->leftChild != NULL)
            {
                q.push(currentNode->leftChild);
            }
            if (currentNode->rightChild != NULL)
            {
                q.push(currentNode->rightChild);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}

// Print Left Boundary Non Leaves Nodes
void printLeftNonLeaves(treeNode* root)
{
    if (root == NULL)
        return;

    if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->leftChild);
    }
    else if ((root->rightChild != NULL))
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->rightChild);
    }
}

// Print All Leave Nodes
void printLeaves(treeNode* root)
{
     if (root == NULL)
        return;

    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << " ";
        return;
    }
    printLeaves(root->leftChild);
    printLeaves(root->rightChild);
}

// Print Right Boundary Non Leaves Nodes
void printRightNonLeaves(treeNode* root)
{
    if (root == NULL)
        return;

    if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->rightChild);
    }
    else if ((root->leftChild != NULL))
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->leftChild);
    }
}


// Boundary Traversal
void boundaryTraversal(treeNode* root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";

    // LB Non-Leaves
    printLeftNonLeaves(root->leftChild);

    // LB Leaves
    printLeaves(root->leftChild);

    // RB Leaves
    printLeaves(root->rightChild);

    // RB Non-Leaves
    printRightNonLeaves(root->rightChild);
}



int searchPosition(int inorder[], int searchValue, int start, int end)
{
    int index;
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == searchValue)
        {
            index = i;
        }
    }
    return index;
}


// Build Tree from Pre Order and In order traversal
treeNode* buildTreePreIn(int preorder[], int inorder[], int start, int end)
{
    static int id = 0;

    int current = preorder[id];
    id++;
    treeNode* newNode = new treeNode(current);

    if (start == end)
    {
        return newNode;
    }
    int pos = searchPosition(inorder, current, start, end);

    newNode->leftChild = buildTreePreIn(preorder, inorder, start, pos - 1);
    newNode->rightChild = buildTreePreIn(preorder, inorder, pos + 1, end);

    return newNode;
}


// Take input in level order and return the root
treeNode* inputLevelOrder()
{
    int a;
    cin >> a;
    treeNode* root = new treeNode(a);

    queue<treeNode*> qu;
    qu.push(root);

    while (!qu.empty())
    {
        treeNode* presentNode = qu.front();
        qu.pop();
        int x, y;
        cin >> x >> y;
        treeNode* n1 = NULL;
        treeNode* n2 = NULL;

        if (x != -1)
        {
            n1 = new treeNode(x);
            presentNode->leftChild = n1;
        }
        if (y != -1)
        {
            n2 = new treeNode(y);
            presentNode->rightChild = n2;
        }
        if (n1 != NULL) qu.push(n1);
        if (n2 != NULL) qu.push(n2);
    }
    return root;
}


int main()
{

//    int n;
//    cin >> n;
//    int preorder[n], inorder[n];
//
//    for (int i= 0; i < n; i++)
//    {
//        cin >> preorder[i];
//    }
//    for (int i= 0; i < n; i++)
//    {
//        cin >> inorder[i];
//    }
//    treeNode* root = buildTreePreIn(preorder, inorder, 0, n - 1);


    // Taking input in level order
    treeNode* root = inputLevelOrder();


//    cout << endl;
//    boundaryTraversal(root);
//    cout << endl;

//    cout << endl;
//    printTree(root, 0);
//    cout << endl;
//
    string leftInorder = "";
    string leftPreOrder = "";
    string leftPostOrder = "";
    inOrder(root->leftChild, leftInorder);
    preOrder(root->leftChild, leftPreOrder);
    postOrder(root->leftChild, leftPostOrder);
    cout << "Left " << endl;
    cout << "In Order Traversal: " << leftInorder << endl;
    cout << "Pre Order Traversal: " << leftPreOrder << endl;
    cout << "Post Order Traversal: " << leftPostOrder << endl;

    cout << endl << endl << "Right: " << endl;

    string rightInorder = "";
    string rightPreOrder = "";
    string rightPostOrder = "";
    inOrder(root->rightChild, rightInorder);
    preOrder(root->rightChild, rightPreOrder);
    postOrder(root->rightChild, rightPostOrder);
    cout << "Right " << endl;
    cout << "In Order Traversal: " << rightInorder << endl;
    cout << "Pre Order Traversal: " << rightPreOrder << endl;
    cout << "Post Order Traversal: " << rightPostOrder << endl;


    cout << endl;
    printTree(root, 0);
    cout << endl;

    return 0;
}




/*
Input: (Level Order)
0
1 2
3 4 5 6
-1 -1 -1 -1 7 8 -1 -1
-1 -1 -1 -1

9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6
Post Order Traversal: 341785620
Level Order Traversal: 012345678



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


1
2 2
3 4 4 3
-1 -1 5 6 6 5 -1 -1
-1 -1 -1 -1 -1 -1 -1 -1


*/
