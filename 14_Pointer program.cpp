#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b =&a;
    //************************** pointer ***********************
    //&---->(address of) Operator 
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;

    //* ----->(value at) dereference Operator
    cout<<"the value at address b is "<<*b<<endl;

    //********************** ponter to pointer*******************
    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is"<<**c<<endl;
    return 0;
}  
