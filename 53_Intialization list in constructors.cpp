/* 
*******Intialization list in constructor*********
 Syntax: constructor(argument_List):intialization_section
{
    assignment + other code;
}
    */

#include<iostream>
using namespace std;
class Test{
    int a;
    int  b;

    public:
    //Test(int i , int j): a(i),b(j)
    //Test(int i , int j): a(i),b(i+j)
    //Test(int i , int j): a(i),b(a+j)
    Test(int i , int j): a(i),b(5 *j)

    {
        cout<<"constructor Executed"<<endl;
        cout<<"value of a: "<<a<<endl;
        cout<<"value of b: "<<b<<endl;
    }
};
int main(){
    Test t(4, 6);
    return 0;
}
