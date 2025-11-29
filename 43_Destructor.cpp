#include<iostream>
using namespace std;

class test {
   public:
   test()
   {
     int n = 10;
    cout<<n<<endl;
   }
   ~test()
   {
     cout<<"object destroyed"<<endl;
   }
   
};


int main(){
    test ob;
    return 0;
}
