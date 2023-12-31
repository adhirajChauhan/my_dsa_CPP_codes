#include <iostream>
#include<map>
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
// 2.
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

// 1.
void insertAtTail(Node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    Node *n = new Node(val);
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

//4. Delete at head

void deleteAtHead(Node *&head)
{
    Node *temp = head;

    while(temp->next!=head){
        temp=temp->next;
    }

    Node *toDelete =head;
    temp->next=head->next;
    head=head->next;

    delete toDelete;
}
//3. Deletion
void deletion(Node *&head, int pos)
{

    if(pos==1){
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    int count = 1;

    while(count!= pos-1)
    {
        temp=temp->next;
        count++;
    }

    Node *toDelete = temp->next;
    temp->next=temp->next->next;

    delete toDelete;
}

void display(Node *head)
{
    Node *temp = head;
    // can't use while because when we will do temp->next== NULL then we cant print the last value so we will use do while loop

    do{
        cout << temp->data << "->";
        temp=temp->next;
    } while(temp!=head); //this will print the first element
    cout << "NULL" << endl;
}

bool isCircular(Node* head){
    //empty list
    if(head == NULL){
        return true;
    }

    //create a new pointer starting from head/head->next doesn't matter
    Node* temp = head ->next;

    //if temp == NULL then there is no circle
    while(temp != NULL && temp != head){
        temp = temp ->next;
    }

    if(temp == head){
        return true;
    }
    return false;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp!= NULL){
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp= temp->next;
    }

    return false;
}

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        //move fast twice
        fast = fast-> next;
        if(fast != NULL){
            fast = fast-> next;
        }

        slow = slow -> next;

        if(slow == fast) return slow;
    }

    return NULL;
}

//find starting node of loop

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp->next;
    }

    temp -> next = NULL;

}
int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head,7);
    display(head);

    if(isCircular(head)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    if(floydDetectLoop(head)){
        cout << "LOOP" << endl;
    }
    else cout << "NO LOOP" << endl;

    // Node *loop = getStartingNode(head); 
    // cout << "Loop satrting at : " << loop <<  endl;

       Node* startingNode = getStartingNode(head); 
    if (startingNode != NULL) {
        int startingNodeData = startingNode->data;
        cout << "Data of the starting node: " << startingNodeData << endl;
    } else {
        cout << "No starting node found." << endl;
    }

    removeLoop(head);
    display(head);
}