#include <iostream>
#include <queue>
using namespace std;
//we will see the right most nodes of the tree, will do the level order traversal till the rightmost node
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

void rightView(Node *root)
{
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        //We will not add null in queue, we will calculate the size of the queue and check how many nodes are stored and traverse over it
        int n = q.size();
        for(int i = 0; i < n; i++){
            //creating a current pointer which will start form the beginning/front of the queue
            Node *curr = q.front();
            q.pop();

            //When we reach the last node
            if(i == n-1){
                cout << curr->data << " ";
            }

            //Then we go on the left and right of the current node
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
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

    rightView(root);
}