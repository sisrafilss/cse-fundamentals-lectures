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

void printInLevelOrder(treeNode* root)
{
    if (root == NULL)
    {
        cout << "Tree is empty!" << endl;
        return;
    }
    cout << root->data << endl;

    queue<treeNode*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        treeNode* currentNode = q.front();
        q.pop();
        if (currentNode == NULL)
        {
            if (!q.empty())
            {
                q.push(NULL);
                cout << endl;
            }
        }

        if (currentNode != NULL && currentNode->leftChild != NULL)
        {
            cout << currentNode->leftChild->data << " ";
            q.push(currentNode->leftChild);
        }
        if (currentNode != NULL && currentNode->rightChild != NULL)
        {
            cout << currentNode->rightChild->data << " ";
            q.push(currentNode->rightChild);
        }
    }
}



int main()
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

    printInLevelOrder(root);

    return 0;
}

/*
Input format (Level Wise) Test Case 1
1
2 3
4 5 6 7
-1 -1 -1 -1 -1 -1 -1 -1

Output:
1
2 3
4 5 6 7

*/










