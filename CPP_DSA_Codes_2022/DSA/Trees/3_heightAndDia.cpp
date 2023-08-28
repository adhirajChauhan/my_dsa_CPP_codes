#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// O(n), geeting called for each node

int calHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lHeight = calHeight(root->left);
    int rHeight = calHeight(root->right);
    return max(lHeight, rHeight) + 1;
}

// number of nodes in the longest path between any two leaves
//optional
int calcDiameter(Node *root)
{
    if(root == NULL){
        return 0;
    }
    int lHeight = calHeight(root->left);
    int rHeight = calHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << calHeight(root) << endl;
}