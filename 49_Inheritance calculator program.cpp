#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
    int a,b;

    public:
    void setNumber1(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void display()
    {
        cout<<"The addition of two numbers are "<<a + b<<endl;
        cout<<"The subtraction of two numbers are "<<a - b<<endl;
        cout<<"The multiplication of two numbers are "<<a * b<<endl;
        cout<<"The division of two numbers are "<<a / b<<endl;
    }
};

class ScientificCalculator
{
    protected:
    int x, y;
    public:
    void setNumber2(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout<<"The cube root of the number x is "<<cbrt(x)<<endl;
        cout<<"The square root of the number x is "<<sqrt(x)<<endl;
        cout<<"The cube root of the number y is "<<cbrt(y)<<endl;
        cout<<"The square root of the number y is "<<sqrt(y)<<endl;
    }
};
    class HybridCalculator:public SimpleCalculator,public ScientificCalculator
    {
      public:
        void setNumber3(int a, int b)
        {
            SimpleCalculator::setNumber1(a, b);
            display();
            ScientificCalculator::setNumber2(a, b);
            show();
        }
    };

int main(){
    int p, q;
    cout<<"enter two values"<<endl;
    cin>>p>>q;
    HybridCalculator d;
    d.setNumber3(p, q);
    return 0;
}
