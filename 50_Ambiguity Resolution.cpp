#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you"<<endl;
    }
};

class Base2{
    public:
    void greet(){
    cout<<"kaise ho"<<endl;
}
};

class Derive:public Base1, public Base2{
    int a;
    public:
    void greet(){
        Base2 :: greet();
    }
};
int main(){
    // Ambiguity 1
    Base1 b;
    Base2 c;
    b.greet();
    c.greet();
    Derive d;
    d.greet();
    return 0;
}

// Another Example
// #include<iostream>
// using namespace std;
// class B{
//     public:
//     void say(){
//         cout<<"hi bhai"<<endl;
//     }
// };
// class D:public B{
//     int a;
//     // D's new say method will override base class say() method
//     public:
//     void say(){
//         cout<<"chalo bacho"<<endl;
//     }
// };
// int main(){
//   B b;
//   D d;
//   b.say();
//   d.say();  
//     return 0;
// }
