// solving by using open and eof(END of file)

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ofstream out;           // Write operation
//     out.open("sample54.txt");
//     out<<"This is me\n";
//     out<<"The is also me";
//     out.close();
//     return 0;
// }

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
     ifstream in;             //read operation
     string st;
     in.open("sample54.txt");
     
     while (in.eof()==0)
     {
        getline(in,st);
        cout<<st<<endl;
     }
    return 0;
}
