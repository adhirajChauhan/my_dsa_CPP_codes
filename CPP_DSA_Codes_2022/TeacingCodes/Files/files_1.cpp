// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
The useful classes for working with files in c++ are
1. fstreambase
2. ifstream -> derieved from fstreambase
3. ofstream ->same
*/

int main()
{
    /*
    //writing the file
        ofstream out;
        string outString = "Adding line 11 in file";

        string inString;
    //opening the file
        out.open("example.txt");
        out << outString << endl; //write in file
    
    //opening files using constructor and reading it
    ifstream in("example.txt"); //Read operation
    //in >> inString; //bring the content of inString in in
    getline(in, inString);
    cout << inString;

    // myfile.close();
    return 0;

    */

   //----------------------------------------------------------------------------------------
    // connecting our file with out stream
   ofstream out("example.txt");

   // Creating a new string and filling it with the string entered by the user
   string name;
   cout << "Enter your name : ";
   cin >> name;

   //Writing string to file
   out << "My name is : " << name;

   out.close(); 

   //Reading the file
   ifstream in("example.txt");
   string content;
   //cin>>content; //bring all file data in content
   getline(in, content);

   cout << "The content of file is : " << content;
   in.close();

}