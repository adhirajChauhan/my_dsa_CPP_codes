#include <iostream>
#include <queue>
using namespace std;
//Nodes get printed level wise, done with help of queue

//Will add 1st element and and NULL when level is finished, when we dequeue the 1 then we will check if left or right exist for it or not
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

void printLevelOrder(Node *root){
    if(root == NULL){
        return;
    }

    //first create a queue and push root and null
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    //iterate until queue is empty
    while(!q.empty()){
        Node *node = q.front();
        q.pop();
        if(node != NULL){
            //print the node data and check if left and right exist
            cout << node->data << " ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        //we will check if queue is not empty, we will push null at the end
        else if(!q.empty()){
            q.push(NULL);
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

    printLevelOrder(root);
}