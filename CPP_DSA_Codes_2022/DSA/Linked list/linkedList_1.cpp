/*
show memory block for array (mycodeschool)
    - how to access element of array (takes constant time)
    - if the array is too big, garbage value will be there, is same need to make copy array
    - Show linked list representation from same video
    - linked list need head node to access

Array vs LL
    - Cost of accessing an element
    - Memory requirement
    - Cost of inserting an element

Implementation - Apna college

*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// 1. Show insertAtTail
void insertAtTail(Node *&head, int val)
{
    // Taking head by reference bcz wem want to modify the value
    // create a new node in which data feild will have val and next will point at null
    Node *n = new Node(val);

    // Special case -> if there is no node in the LL
    if (head == NULL)
    {
        // We will not traverse
        head = n;
        return;
    }

    // iterate LL from begin to end with a pointer which will initially point at head
    Node *temp = head;
    // keep iterating until the next of temp is NULL
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // At the end after iterating the loop
    temp->next = n;
}

// 2. Insert AT head

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    // point the newly added node towards head
    n->next = head;
    // Move the head on the newly added node
    head = n;
}
// display the LL
void display(Node *head)
{
    // Taking head pointer bcz we are not modifying
    // Taking a temp pointer starting from head
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        // incrementing the temp pointer from one node to another
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// 3. Search in LL

bool search(Node *head, int key)
{
    // Creating a temp variable starting from head
    Node *temp = head;
    // Traverse the list until temp != NULL

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        // Increment the temp pointer
        temp = temp->next;
    }
    return false;
}

// 4. Delete node, to delete nth node, we need to be at n-1th node and point it towards n+1th node
void deletion(Node *&head, int val)
{
    // val is the avlue we want to delete
    Node *temp = head;

    // if there are no nodes in LL
    if (head == NULL)
    {
        // we can't do anything
        return;
    }

    // for only one element we can check here also
    // if (head->next == NULL)
    // {
    //     deleteAtHead(head);
    //     return;
    // }
    // Note - this will fail if there is one node in LL, we create a seperate func for that deleteAtHead()
    while (temp->next->data != val)
    {
        // We are going to n-1 node because that next will know the data of node we want to delete
        // Keep traversing until we find the value
        temp = temp->next;
    }
    // store the node to delete in a pointer before changing the reference because once link is broken we cant find what to delete

    Node *toDelete = temp->next;
    // Change the pointer from n-1 to n+1
    temp->next = temp->next->next;

    delete toDelete;
}

void deleteAtHead(Node *&head)
{
    Node *nodeToDelete = head;
    // As it only have one node so it will be next to head
    head = head->next;

    delete nodeToDelete;
}

// 5.Reverse LL, check video ApnaCollege for flow

Node *reverse(Node *&head)
{
    // We need three pointers
    Node *prev = NULL;
    Node *curr = head;
    Node *next; // Will init in loop

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev; //New head
}

Node* kReverse(Node* head, int k){
    //base case
    if(head == NULL){
        return NULL;
    }

    //step 1 : reverese first k nodes

        // We need three pointers
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL; 
        int count = 0;
        while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
        count++;
    }

    //step 2 : recursion on next
    if(next != NULL){
        head -> next = kReverse(next,k);
    }

    //step 3 : retrun head of reversed list
    return prev;

}


int main()
{

    // Create empty LL
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 4);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // display(head);

    // insertAtHead(head, 4);
    // display(head);

    // cout << search(head, 1) << endl;
    // deleteAtHead(head);
    // deletion(head, 2);

    // Node* newHead = reverse(head);
    // display(newHead);
    display(head);

    // Node* kRev = kReverse(head, 2);
    // display(kRev);
}