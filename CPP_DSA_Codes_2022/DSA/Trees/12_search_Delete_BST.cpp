#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    int key;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *searchInBST(Node *root, int key)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }

    // data > key
    if (root->data > key)
    {
        return searchInBST(root->left, key);
    }

    // data < key
    return searchInBST(root->right, key);
}

Node *inorderSucc(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
// Delete in BST
Node *deleteInBST(Node *root, int key)
{
    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }

    // when we get the current node that needs to be deleted
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // case 3
        Node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->key);
    }
    return root;
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if (searchInBST(root, 5) == NULL)
    {
        cout << "Key doesn't exist";
    }
    else
    {
        cout << "Key exist";
    }
}