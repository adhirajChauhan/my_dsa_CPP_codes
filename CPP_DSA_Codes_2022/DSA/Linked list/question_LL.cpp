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

//Remove duplicates from sorted list

Node* uniqueSortedLisst(Node *head){
    //empty list
    if(head == NULL){
        return NULL;
    }

    //non empty list
    Node* curr = head;

    while(curr != NULL){
        if((curr->next != NULL) && curr-> data == curr ->next ->data){
            //if duplicate data found, change the pointer and del the curr
            Node* next_next = curr -> next ->next;
            Node* nodeToDelete = curr ->next;
            delete nodeToDelete;
            curr->next = next_next;
        }
        else{ //not equal
            curr = curr -> next;
        }
    }

    return head;
}

//Remove duplicates from unsorted list
//do


//sort linked list of 0s 1s and 2s
Node* sortList(Node* head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0) zeroCount++;
        else if(temp->data == 1) oneCount++;
        else if(temp->data == 2) twoCount++;

        temp = temp->next;
    } 

    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }

    return head;
}


int main(){

}