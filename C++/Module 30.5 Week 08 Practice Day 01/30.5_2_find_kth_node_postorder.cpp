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

int cnt = 0;
void printKthNode(treeNode* root, int k)
{
    if (root == NULL) return;

    printKthNode(root->leftChild, k);
    printKthNode(root->rightChild, k);
    cnt++;
    if (cnt == k)
    {
        cout << root->data << endl;
        return;
    }

}


int main()
{
    int n, k, a;
    cin >> n >> k;
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

    printKthNode(root, k);

    return 0;
}

/*
Input format (Level Wise) Test Case 1
5 4
1
2 3
4 5 -1 -1
-1 -1 -1 -1
Output: 3


Input format (Level Wise) Test Case 2
7 3
1
2 3
4 5 6 7
-1 -1 -1 -1 -1 -1 -1 -1
Output: 2

*/










