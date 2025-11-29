---------->> by using new keyword

#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int *ptr = &a;
    cout<<"The value of a is: "<<*ptr<<endl;

    //New Operator
    int *p = new int(2);
    float *k = new float(4.3);
    cout<<"the value at address p is "<<*p<<endl;
    cout<<"the value at address k is "<<*k<<endl;

    return 0;
}
