#include<iostream>
using namespace std;

template <class T1=int , class T2=float, class T3=char>
class Dilip{
    public:
    T1 a;
    T2 b;
    T3 c;
    Dilip(T1 x, T2 y, T3 z){
        a = x; 
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

int main(){
    Dilip<> d(5, 7.8, 'c');
    d.display();
    cout<<endl;
    Dilip<float, char, char> k(1.6, 't', 'j');
    k.display();
    return 0;
}
