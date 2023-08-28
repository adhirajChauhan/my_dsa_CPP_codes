#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//reverse a queue
//take out elements from queue 1 by 1 and put in stack
//take out elements 1 by 1 from stack and put in queue

queue<int> rev(queue<int> q){
    stack<int> s;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}

//reverse first k elements of queue

queue<int> modifyQueue(queue<int> q, int k){
    //pop first k elements from Q and put in stack
    stack<int> s;

    for(int i = 0; i < k; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }

    //fetch from stack and push into Q
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }

    //fetch first (n-k) elements from Q and push back

    int t = q.size() - k;

    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
}

//------------------------------------------------------
/*
First non repeating charater in a stream

Given an input stream A of n characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.

Example 1:

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'

*/
#include <unordered_map>
string FirstNonRepeating(string A){
    unordered_map<char, int> count;
    queue<int> q;
    string ans = "";
    
    for(int i = 0; i < A.length(); i++){
        char ch = A[i];

        //increase count
        count[ch]++;

        //push in queue
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()] > 1){
                //repeating character
                q.pop();
            }
            else{
                //non repeating character
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }

}


/*
---------------------------------------------------------------------------
https://www.geeksforgeeks.org/interleave-first-half-queue-second-half/
Interleave the first half of the queue with second half

Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.  

Examples:

Input :  1 2 3 4
Output : 1 3 2 4

Input : 11 12 13 14 15 16 17 18 19 20
Output : 11 16 12 17 13 18 14 19 15 20

*/

void interLeaveQueue(queue<int>& q)
{
    // To check the even number of elements
    if (q.size() % 2 != 0)
        cout << "Input even number of integers." << endl;
 
    // Initialize an empty stack of int type
    stack<int> s;
    int halfSize = q.size() / 2;
 
    // Push first half elements into the stack
    // queue:16 17 18 19 20, stack: 15(T) 14 13 12 11
    for (int i = 0; i < halfSize; i++) {
        s.push(q.front());
        q.pop();
    }
 
    // enqueue back the stack elements
    // queue: 16 17 18 19 20 15 14 13 12 11
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
 
    // dequeue the first half elements of queue
    // and enqueue them back
    // queue: 15 14 13 12 11 16 17 18 19 20
    for (int i = 0; i < halfSize; i++) {
        q.push(q.front());
        q.pop();
    }
 
    // Again push the first half elements into the stack
    // queue: 16 17 18 19 20, stack: 11(T) 12 13 14 15
    for (int i = 0; i < halfSize; i++) {
        s.push(q.front());
        q.pop();
    }
 
    // interleave the elements of queue and stack
    // queue: 11 16 12 17 13 18 14 19 15 20
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}

int main(){

}