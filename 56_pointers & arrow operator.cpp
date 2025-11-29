#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
     void printData() {
       cout<<"The real part is "<<real<<endl;
       cout<<"The imaginary part is "<<imaginary<<endl;
       cout<<"The complex part of real and imaginary  is "<<real<<"+"<<"i"<<imaginary<<endl;
     }
};
int main(){
    complex *ptr = new complex;
    // (*ptr).setData(4, 5);
    // (*ptr).printData();

    // Arrow operator
    ptr->setData(1, 4);
    ptr->printData();
    return 0;
}
