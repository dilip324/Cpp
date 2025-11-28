#include<iostream>
using namespace std;

int sum(float a, int b){
    cout<<"using funtion with two arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;

    // Another Example of function overloading. 
}
//volume of a cylinder
int volume(double r, int h) {
    return (3.14*r*r*h);
}
// volume of a cube
int volume(int a) {
    return (a*a*a);
}
// volume of rectangular box
int volume(int l, int b, int h) {
    return (l*b*h);
}


int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"the sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl; 
    cout<<"the volume of  a cuboid of 3, 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"the volume of a cylinder of radius 3 and height 6 i "<<volume(3,6)<<endl;
    cout<<"then volume of cube side of 3 is "<<volume(3)<<endl; 

    
    return 0;
}
