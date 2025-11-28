#include<iostream>
using namespace std;
union emp 
{
    /* data */
    int Eid;  //4 bytes
    double salary;  //8 bytes
    char ch;  //1 byte
};
int main() {
union emp dilip;
dilip.Eid=1;
cout<<dilip.Eid<<endl;
dilip.salary=90500;
cout<<dilip.salary<<endl;
dilip.ch='D';
cout<<dilip.ch<<endl;
return 0;
}  
