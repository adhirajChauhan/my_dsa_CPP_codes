#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// 2.
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);

    // Creating link between new  node and first node
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    // prev will point at null only(line 15)

    head = n;
}
// 1.
void insertAtTail(Node *&head, int val)
{
    // Edge case, if head is null (video - 3:45)
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    // create a new node
    Node *n = new Node(val);
    // create a temp to iterate over dLL
    Node *temp = head;

    // keep iterating temp until we reach the end
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

// 4.
void deleteAtHead(Node *&head)
{
    Node *toDelete = head;
    head = head->next;
    head->prev = NULL;

    delete toDelete;
}
// 3.
// Check video at 7:00
void deletion(Node *&head, int pos)
{
    // if there is only head node to be deleted
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    // to reach till the position
    int count = 0;

    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next; // 62

    // Special case check, To avoid error thrown when we try to del last node
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
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

//7.Optional function
void intersect(Node *&head1, Node *&head2, int pos)
{
    Node *temp1 = head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    Node *temp2=head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next=temp1;
}

// 6. Find length of sLL
int length(Node *head)
{
    int l = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

/*5. How to find if two LL intersect at a same point and return intersection point of 2 sLL? a) we can iterate over one and keep a visited check and in second LL if we get visited check we can say that is the common point with T(n+m)
b) take the length of 1 sLL and sub from 2nd to know the difference b/w length, then start iterating from the difference
*/
int intersection(Node *&head1, Node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    // find the difference b/w length of two LL, whichever is greater we will shift d at that point
    int d = 0;
    Node *ptr1; //for longer LL
    Node *ptr2; //for shorter LL
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    
    while(d){
        //moving the ptr1 from init pos to that postion which will come after difference between 2 LL
        ptr1=ptr1->next; //moving ptr forward

        if(ptr1==NULL)
        {
            return -1;
        }
        d--; //decrementing d
    }

    while(ptr1!=NULL && ptr2!=NULL)
    {
        //Initial check
        while(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);

    display(head);

    // Node *head1 = NULL;
    // Node *head2 = NULL;
    // insertAtTail(head1, 1);
    // insertAtTail(head1, 2);
    // insertAtTail(head1, 3);
    // insertAtTail(head1, 4);
    // insertAtTail(head2, 5);
    // insertAtTail(head2, 6);
    // insertAtTail(head2, 7);
    // intersect(head1, head2,3);

    // display(head1);
    // display(head2);

    // cout<<intersection(head1,head2)<<endl;

    // deletion(head, 2);
    // display(head);
}