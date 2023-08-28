// Reverse a sentence with STL
#include <iostream>
#include <stack>
using namespace std;

// to reverse a string, we need to start from 0th index of sentence and as we get space, we will know that a new word has been started and then we will push that word in the stack.
void reverseSentence(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        // until we get space character, we will keep adding in word var
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            // doing i++ again because we are on space character
            i++;
        }
        // then we push that word in the stack
        st.push(word);
    }

    // print the words from stack
    while (!st.empty())
    {
        cout << st.top() << " ";
        // to remove the top element
        st.pop();
    }
    cout << endl;
}

int main()
{
    // show this first
    //  stack<int> st;
    //  st

    string s = "Hey, how are you?";

    reverseSentence(s);
}