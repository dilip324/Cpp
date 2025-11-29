#include<iostream>
using namespace std;

class Number {
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    // when no copy constructor is found , compiler supplies its own copy Constructor

    Number(Number &obj){
        cout<<"copy constuctor called!!!"<<endl;
        a = obj.a;
    }
    void display() {
        cout<<"The number for this object is"<<a<<endl;
    }
};
int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();
    z2 = z;  //object is already created
    z2.display();
    Number z3 = z; //object is being created
    z3.display();
    return 0;
}

