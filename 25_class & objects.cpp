
// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed

// ----------Class Example

#include<iostream>
using namespace std;
class person{
    private:
    int age;
    string name;
    string address;

    public:
    
    void input() {
        cout<<"enter age: ";
        cin>>age;
        cout<<"enetr name: ";
        cin>>name;
        cout<<"enter address: ";
        cin>>address;
        

    }
    void show() {
        cout<<"Age "<<age<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Address "<<address<<endl;
        


    }

};
int main() {
    person dilip, hanuman;
    
    dilip.input();
    dilip.show();

    hanuman.input();
    hanuman.show();
    return 0; 
}  
