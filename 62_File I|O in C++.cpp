// File I/O in C++: Reading and Writing Files
// These are some useful classes for working with files in C++

// fstreambase
// ifstream --> derived from fstreambase
// ofstream --> derived from fstreambase

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

// Using the constructor
// Using the member function open() of the class


#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Dilip Prajapat"; 
    string st2;

    // Opening files using constructor and writing it
    // ofstream out("sample54.txt"); // Write operation
    // out<<st;

    //opening files using constructor and reading it
    ifstream in("sample54b.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}
