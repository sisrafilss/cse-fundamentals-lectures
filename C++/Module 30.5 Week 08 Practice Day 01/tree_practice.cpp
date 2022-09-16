#include<bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode* leftChild;
    treeNode* rightChild;
    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void printTree(treeNode* root, int level);
void printSpace(int level);
void preOrder(treeNode* root, string &chk);
void inOrder(treeNode* root, string &chk);
void postOrder(treeNode* root, string &chk);



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
        printSpace(level);
        cout << "Root: " << root->data << endl;
    }

    printSpace(level);
    cout << "Left: ";
    printTree(root->leftChild, level + 1);


    printSpace(level);
    cout << "Right: ";
    printTree(root->rightChild, level + 1);

}


void printSpace(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "    ";
    }
}


void preOrder(treeNode* root, string &chk)
{
    if (root == NULL) return;

    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}


void inOrder(treeNode* root, string &chk)
{
    if (root == NULL) return;

    inOrder(root->leftChild, chk);
    chk += to_string(root->data);
    inOrder(root->rightChild, chk);
}


void postOrder(treeNode* root, string &chk)
{
    if (root == NULL) return;

    if (root->leftChild != NULL) postOrder(root->leftChild, chk);
    if (root->rightChild != NULL) postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}


int main()
{
    int n;
    cin >> n;
    treeNode* allNodes[100];
    for (int i = 0; i < 100; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int val, left, right;
        cin >> val >> left >> right;
        allNodes[i]->data = val;
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

    string preOrderTraversal = "";
    string inOrderTraversal = "";
    string postOrderTraversal = "";

    preOrder(allNodes[0], preOrderTraversal);
    inOrder(allNodes[0], inOrderTraversal);
    postOrder(allNodes[0], postOrderTraversal);

    cout << "Pre-Order Traversal: " << preOrderTraversal << endl;
    cout << "In-Order Traversal: " << inOrderTraversal << endl;
    cout << "Post-Order Traversal: " << postOrderTraversal << endl;

    return 0;
}
