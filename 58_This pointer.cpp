// --------------->> example 1
#include<iostream>
using namespace std;

class A{
    int a;
    public:
    
    void setData(int a){
        this->a = a;
      
    }

    void getData() {
        cout<<"The value of a is "<<a<<endl;
    }

};

int main() {
    A a;
    a.setData(4);
    a.getData();
    return 0;
}

// --------------->> example 2
#include<iostream>
using namespace std;
   class A{
    int a;
    public:
    A & setValue(int a){
      this->a = a;
      return *this;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
   };
int main(){
    A a;
    a.setValue(4).getData();
    return 0;
}
