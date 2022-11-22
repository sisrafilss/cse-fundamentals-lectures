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


// print Space
void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
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

int ans = 0;
int maxDepth(treeNode* root)
{
    if (root == NULL)
        return 0;

    int x = maxDepth(root->leftChild);
    int y = maxDepth(root->rightChild);
    ans = max(ans, x + y);
    return max(x, y) + 1;
}


int diameter(treeNode* root)
{

}



int main()
{
    treeNode* root = inputLevelOrder();

    int depth = maxDepth(root);
    cout << endl;
    cout << ans << endl;
    cout << endl;

    printTree(root, 0);



    return 0;
}


/*
1
2 3
4 5 -1 -1
-1 -1 -1 -1


1
2 3
4 6 -1 -1
5 -1 -1 7
-1 12 8 -1
14 13 9 10
15 -1 -1 -1 -1 -1 -1 11
-1 -1 -1 -1
*/
