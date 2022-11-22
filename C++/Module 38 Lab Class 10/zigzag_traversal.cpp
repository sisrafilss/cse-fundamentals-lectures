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
treeNode* insertionBST(treeNode* root, int val);


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
    chk += (to_string(root->data) + " ");
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

void zigzagTraversal(treeNode* root)
{
    stack<treeNode*> currentLevel;
    stack<treeNode*> nextLevel;
    bool leftToRight = true;
    currentLevel.push(root);

    while (!currentLevel.empty())
    {
        treeNode* temp = currentLevel.top();
        currentLevel.pop();
        cout << temp->data << " ";

        if (leftToRight)
        {
            if (temp->leftChild) nextLevel.push(temp->leftChild);
            if (temp->rightChild) nextLevel.push(temp->rightChild);
        }
        else
        {
            if (temp->rightChild) nextLevel.push(temp->rightChild);
            if (temp->leftChild) nextLevel.push(temp->leftChild);
        }
        if (currentLevel.empty())
        {
            leftToRight = !leftToRight;
            swap(currentLevel, nextLevel);
        }
    }
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


// Insert at Binary Search Tree
treeNode* insertionBST(treeNode* root, int val)
{
    treeNode* newNode = new treeNode(val);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }

    if (val < root->data)
    {
        root->leftChild = insertionBST(root->leftChild, val);
    }
    else
    {
        root->rightChild = insertionBST(root->rightChild, val);
    }

    return root;
}


treeNode* searchBST(treeNode* root, int value)
{
    if (root == NULL) return root;

    if (root->data == value)
    {
        cout << root->data << endl;
        return root;
    }
    else if (value < root->data)
    {
        cout << root->data << "->";
        searchBST(root->leftChild, value);
    }
    else if (value > root->data)
    {
        cout << root->data << "->";
        searchBST(root->rightChild, value);
    }
}


treeNode* inorderSucc(treeNode* root)
{
    treeNode* curr = root;

    while (curr->leftChild != NULL)
    {
        curr = curr->leftChild;
    }
    return curr;
}

treeNode* deletionBST(treeNode* root, int value)
{
    if (value < root->data)
    {
        root->leftChild = deletionBST(root->leftChild, value);
    }
    else if (value > root->data)
    {
        root->rightChild = deletionBST(root->rightChild, value);
    }
    else
    {
        // handle 3 cases
        if (root->leftChild == NULL)
        {
            treeNode* temp = root->rightChild;
            free(root);
            return temp;
        }
        else if (root->rightChild == NULL)
        {
            treeNode* temp = root->leftChild;
            free(root);
            return temp;
        }
        else
        {
            treeNode* temp = inorderSucc(root->rightChild);
            root->data = temp->data;
            root->rightChild = deletionBST(root->rightChild, temp->data);
        }
        return root;
    }
}




int main()
{
    treeNode* root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        root = insertionBST(root, x);
    }

    zigzagTraversal(root);

//    string traversal = "";
//    inOrder(root, traversal);
//    cout << traversal << endl;
//
//    int key;
//    cin >> key;
//    root = deletionBST(root, key);
//
//    traversal = "";
//    inOrder(root, traversal);
//    cout << traversal << endl;

    return 0;
}



/*
10
11 5 9 43 34 1 2 7 8 21

*/








